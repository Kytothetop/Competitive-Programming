#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN;
	vector< pair<int,string> > s;
    while(n--)
	{
		string str;
		cin >> str;
		int l = str.length();
		s.push_back(make_pair(l,str));
	}
	sort(s.begin(),s.end(),greater<pair<int,string>>());
//	for(auto &e : s)cout << e.first << ' ' << e.second << '\n';
	cout << s[2].second;
}
