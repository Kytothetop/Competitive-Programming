#include <bits/stdc++.h>
/*
Task    :   plab031
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU049
*/
using namespace std;
/*
6
stk_i_a 4 Angel 25 Zippy 5 Poppy 17 Daffy 8
stk_p
stk_d
stk_i Chickie 19
stk_p_a
stk_s
*/
stack <pair<string,int>> v;
int actnum, temp, temp2;
string cmd;
string temps;
void func(stack<pair<string,int>> v)
{
    while(not v.empty())
        {
            cout << v.top().first << ' ' << v.top().second;
            if(v.size() > 1)cout << '\n';
            v.pop();
        }
}

void com()
{
    cin >> cmd;

    if (cmd == "stk_i_a")
        {
            cin >> temp2;
            for(int i=0; i<temp2; i++)
                {
                    cin >> temps >>temp;
                    v.push({temps, temp});
                }
        }

    else if (cmd == "stk_p")
        {
            cout << v.top().first << ' '<< v.top().second;
            if(actnum > 0)cout << '\n';
        }
    else if (cmd ==  "stk_d")
        {
            v.pop();
        }

    else if (cmd ==  "stk_i")
        {
            cin >> temps >> temp;
            v.push({temps, temp});
        }

    else if (cmd ==  "stk_p_a")
        {
        	func(v);
        	if(actnum > 0)cout << '\n';
        }
    else if (cmd ==  "stk_s")
	{
		cout << v.size();
        	if(actnum > 0)cout << '\n';
	}

}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> actnum;
    while(actnum--)
        {
            com();
        }
}
