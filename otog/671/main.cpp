#include <bits/stdc++.h>
using namespace std;

bool check(char &c)
{
    if(c >= '0' and c<= '9')
        return 1;
    return 0;
}
int carb =0;
int hydr =0;
void solve()
{
	int sum =0;
    bool aaaa = true;
    string str;
    cin >> str;
    string s = "";
    int n = str.length();
    for(auto &c : str)
        {
            if(check(c))
                {
                    s = s + c;
                }
            else if(!s.empty())
                {
                    //cout << s << ' ';
                    if(aaaa)
                        {
                            carb = stoi(s);
                            aaaa = false;
                        }
                    else hydr = stoi(s);
//                    cout << stoi(s) << ' ';
                    s = "";
                }
        }
    if(!s.empty())
        {
            if(aaaa)
                {
                    carb = stoi(s);
                    aaaa = false;
                }
            else hydr = stoi(s);
//                    cout << stoi(s) << ' ';

            s = "";
        }
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;

	while(t--)
	{
		solve();
//		cout << carb << ' ' << hydr;
		if(hydr == 2*carb+2)cout << "Alkane";
		if(hydr == 2*carb)cout <<   "Alkene";
		if(hydr == 2*carb-2)cout << "Alkyne";
		if(t > 0)cout << '\n';
	}

    return 0;
}
