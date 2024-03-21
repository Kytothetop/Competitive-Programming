#include <iostream>

using namespace std;
void sol()
{
    int cnt[52] = {0};
    string s;
    cin >> s;
    int f1 =0,mx= -3,mn=INT_MAX,curr;
    for(auto &c : s)
	{
		switch (c)
		{
		case 'A' ... 'Z':
			curr = c - 'A';
			break;
		case 'a' ... 'z':
			curr = c - 'a' + 26;
			break;
		default:
			break;
		}
			cnt[curr]++;
			if(cnt[curr] == 1) f1++;
	}


    for(auto &c : s)
	{
		switch (c)
		{
		case 'A' ... 'Z':
			curr = c - 'A';
			break;
		case 'a' ... 'z':
			curr = c - 'a' + 26;
			break;
		default:
			break;
		}
			mx = max(mx, cnt[curr]);
			mn = min(mn, cnt[curr]);
	}
	cout << f1 << ' ' << mx << ' ' << mn;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    for(int i =0; i < t ; i++)
        {
            sol();
            if(i < t-1)
                cout << '\n';
        }
}
