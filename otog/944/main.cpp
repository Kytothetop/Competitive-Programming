#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<wchar_t,int> mp;
	string str;
	cin >> str;
	int mx = INT_MIN;
	for (auto &c : str)
	{
		mp[c]++;
	}
	for(auto &e : mp)
	{
		mx = max(e.second ,mx);
	}
	cout << mx;
}
