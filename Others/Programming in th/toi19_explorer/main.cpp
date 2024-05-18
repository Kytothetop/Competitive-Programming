#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
using ll = long long;
ll memo[1000010];

ll fact(ll n)
{
	if(memo[n] !=0)return memo[n];
	return memo[n] = (ll)((long long)(n%MOD)*(fact(n-1)%MOD))%MOD;
}

int main()
{
	memo[1] = 1;
	memo[0] = 1;
    int n;
    cin >> n;
//    vector<int> arr(n);
	vector<int> parent(n);
	vector<int> childNum(n,0); ///Count children of this node
	vector<int> trr;
	for(int i =0; i < n; i++)
	{
		parent[i] = i;
	}

		int temp;
	cin >> temp;
	temp--;
	trr.push_back(temp);
    for(int i =1; i < 2*n-1;i++)
	{
		cin >> temp;
		temp--;
		trr.push_back(temp);
		if(parent[trr[i-1]] != trr[i]) /// If new branch
		{
			parent[trr[i]] = trr[i-1]; /// Now node is child of previous
			childNum[trr[i-1]]++;
		}
	}
	ll sum =1;
//	for(int i =0; i < n; i++)cout << fact(i) << '\n';
	for(int i =0; i < n; i++)
	{
//		if(childNum[i] == 0)childNum[i] =1;
//		cout << childNum[i]%MOD << ' ' << fact((childNum[i])%MOD) << '\n';
		sum *= fact((childNum[i])%MOD);
		sum = sum%MOD;
	}
//	cout << '\n';
	cout << sum%MOD;
	return 0;
}
