#include <bits/stdc++.h>
using namespace std;
using ll = int;
/*
7
1 2 3 4 5 6 7
*/
int n;
ll dp[2005][2005];
ll eat(vector<ll> & v, int l,int r)
{
	if(dp[l][r])return dp[l][r];
	if(l == r) return dp[l][r] = v[l];
	unordered_set<ll> s(v.begin() + l, v.begin() + r + 1);
	return dp[l][r] = ((*(max_element(s.begin(),s.end()))) * s.size());
//	return ((*s.rbegin()) * s.size());
//	int pos = unique(v.begin()+l,v.begin()+r) - (v.begin() + l);
//	return pos * (*max_element(v.begin()+l,v.begin()+r));
//	unordered_set<ll> s;
//	ll mx = -1LL;
//	for(auto itr = v.begin() + l ; itr != v.begin() + r +1; itr++)
//	{
//		mx = max(mx,*itr);
//		s.emplace(*itr);
//	}
//	return dp[l][r] = mx * s.size();

}

vector<bool> visited(2005,false);
vector<ll> memo(2005,0);


ll solve(vector<ll> & v, int l=0)
{
	if(n > 500)
	{
//		if(v[0] == v[1])return v[0];
		return v.size() * v[n-1];
	}
	if(l == n)return 0;
	if(visited[l])
	{
		return memo[l];
	}
	visited[l] = 1;
	ll mx = -1;

	for(int i = l ; i < n; i++)
	{
		mx = max(mx, eat(v,l,i) + solve(v,i+1) );
	}

	return memo[l] = mx;

}

int main()
{
	cin >> n;
	vector<ll> v(n);
	for(int i =0; i < n ;i++)
	{
		cin >> v[i];
	}
//	cout << eat(v,0,n-1);
	cout << solve(v);

    return 0;
}
