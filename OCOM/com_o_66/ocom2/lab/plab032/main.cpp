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
queue <pair<pair<int,string>,int>> v;
int actnum, temp, temp2, temp0;
string cmd;
string temps;
void func(queue<pair<pair<int,string>,int>> v)
{
    while(not v.empty())
        {
            cout << v.front().first.first << ' '<< v.front().first.second << ' '<< v.front().second;
            if(v.size() > 1)cout << '\n';
            v.pop();
        }
}

void com()
{
    cin >> cmd;

    if (cmd == "que_i_a")
        {
            cin >> temp2;
            for(int i=0; i<temp2; i++)
                {
                    cin >> temp0 >>temps >>temp;
                    v.push({{temp0,temps}, temp});
                }
        }

    else if (cmd == "que_p_f")
        {
            cout << v.front().first.first << ' '<< v.front().first.second << ' '<< v.front().second;
            if(actnum > 0)cout << '\n';
        }
    else if (cmd == "que_p_l")
        {
            cout << v.back().first.first << ' '<< v.back().first.second << ' '<< v.back().second;
            if(actnum > 0)cout << '\n';
        }
    else if (cmd ==  "que_d")
        {
            v.pop();
        }

    else if (cmd ==  "que_i")
        {
            cin >> temp0 >>temps >>temp;
                    v.push({{temp0,temps}, temp});
        }

    else if (cmd ==  "que_p_a")
        {
        	func(v);
        	if(actnum > 0)cout << '\n';
        }
    else if (cmd ==  "que_s")
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
