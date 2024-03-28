#include <bits/stdc++.h>

using namespace std;
using ll = long double;
vector<ll> memo(1e5,0);
//ll memo[1e5] = {0.0};

ll fibo(ll n)
{
	if(memo[n] != 0 or n == 0)return memo[n];
	return memo[n] = fibo(n-1) + fibo(n-2);
}
int main()
{
	memo[0] = 0;
	memo[1] = 1;
    ll n;
    cin >> n;
    cout << fixed << setprecision(0);
    cout << fibo(n);
}
