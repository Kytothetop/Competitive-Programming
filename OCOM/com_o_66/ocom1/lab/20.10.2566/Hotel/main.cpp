#include <bits/stdc++.h>

using namespace std;
map<long long int,long long int> memo;
int func(long long int n)
{
	if(n <= 0) return 0;
	if(memo.count(n) > 0)
		return memo[n];
	memo[n] = min(min(func(n-15) + 3000,
					func(n-5) + 1500) ,
				min(func(n-2) +  800,
						func(n-1) + 500));
	return memo[n];
}


int main()
{
    long long int n;
    cin >> n;
	cout << func(n);
}
