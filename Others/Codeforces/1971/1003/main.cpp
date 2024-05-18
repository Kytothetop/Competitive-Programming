#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
// Function to calculate MODular exponentiation (a^b % MOD)
// Function to calculate modular exponentiation (a^b % mod)
long long power(long long a, long long b) {
    long long result = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1)
            result = (result * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}

// Precompute factorials and their inverses
vector<long long> factorial;
vector<long long> invFactorial;

void precomputeFactorials(int n) {
    factorial.resize(n + 1);
    invFactorial.resize(n + 1);
    factorial[0] = 1;
    invFactorial[0] = 1;
    for (int i = 1; i <= n; ++i) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
        invFactorial[i] = power(factorial[i], MOD - 2); // Calculate modular multiplicative inverse
    }
}

// Function to calculate n choose r modulo mod
long long nChooseR(int n, int r) {
    if (r > n)
        return 0;

    // Use symmetry property
    if (r > n - r)
        r = n - r;

    // Calculate n choose r modulo mod
    return (factorial[n] * invFactorial[r] % MOD) * invFactorial[n - r] % MOD;
}

ll countInRange(const std::vector<ll>& vec, ll low, ll high) {
    // Find the lower bound and upper bound of the range using binary search
    auto lowIter = (std::lower_bound(vec.begin(), vec.end(), low) - vec.begin()) % MOD;
    auto highIter = (std::upper_bound(vec.begin(), vec.end(), high) - vec.begin()) %MOD;

    // Calculate the count by subtracting iterators
    return highIter - lowIter;
}

vector<ll> prefix[21LL];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,q;
    cin >> n >> m >> q;
    ll x;
    for(ll i =0LL; i < n ; i++)
        {
            cin >> x;
            prefix[x].push_back(i);
        }
        precomputeFactorials(n); // Precompute factorials
    while(q--)
        {
            ll l,r,c;
            cin >> l >> r >> c;
			ll cnt = countInRange(prefix[c],l,r) %MOD;
			if(cnt >= m)
				cout << nChooseR(cnt,m)%MOD << '\n';
			else
				cout << "-1\n";
        }


}
