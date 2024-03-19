#include <bits/stdc++.h>
/*

index:	0 1 2 3 4 5 6 7 8 9  10 11 12 13 14 15 16
number:	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
sieve:	0 0 1 1 0 1 0 1 0 0   1  0  1  0  0  0  1

		0 0 1 2 2 3 3 4 4 4   5  5  6  0  0  0  7
Want 3:     0	  3
*/

/*
testcase
input:
10
2
1 2 3 4 5 6 7 8 9 10
output:
2
*/
/*
testcase
input:
10
3
1 2 3 4 5 6 7 8 9 10
output:
4
*/

using namespace std;



void sieve(vector<bool> &is_prime,int n) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, rramax = INT_MIN;
    cin >> n >> k;
    k--;
    int arr[n];
    for(int i =0; i < n ; i++)
	{
		cin >> arr[i];
		rramax = max(rramax, arr[i]);
	}
	vector<bool> is_prime(rramax+2,true);
    sieve(is_prime, rramax); // Perform Sieve of Eratosthenes up to max of all
    vector<int> fish;
    for(int i =0; i < n ; i++)
	{
		if(is_prime[arr[i]])
		{
			fish.push_back(i);
		}
	}

	int cnt =0;
	int mn = INT_MAX;
	for(int i =k;i< fish.size() ;i++)
	{
		mn = min(mn,fish[i]-fish[i-k]+1);
	}
	cout << mn;


    return 0;
}
