#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
	{
		string s;
		cin >> s;
		bool flg = 0;
		for(int i =1; i < s.length() ; i++)
		{
			if(s[i] != s[i-1])
			{
				flg = 1;
				cout << "yes\n";
				swap(s[i],s[i-1]);
				cout << s << '\n';
				break;
			}
		}
		if(not flg)
		{
			cout << "no\n";
		}
	}
}
