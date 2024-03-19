#include <bits/stdc++.h>

using namespace std;
bool check(char &c)
{
    return (c >= '0' and c<='9');
}
int main()
{
    vector<string> num;
    string str;
    getline(cin, str);
    string s = "";
    for (int i =0; i<str.length() ; i++ )
        {
            if(check(str[i]))
                {
                    s = s + str[i];
                }
            else if(!s.empty())
                {
                    num.push_back(s);
                    s = "";
                }

        }
    num.push_back(s);
    s = "";
    vector<int> n;
    int sum =0;
    for(auto &e : num)
        {
        	sort(e.begin(),e.end(),greater<char>());
            n.push_back(stoi(e));
            sum += stoi(e);
//            cout << e << ' ';
        }
		cout << sum << ' ' << n.size() << '\n';
	for(int i =0; i < n.size(); i ++)
	{
		cout << n[i];
		if(i < n.size()-1)cout << '\n';
	}
}
