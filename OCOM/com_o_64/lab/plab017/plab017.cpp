#include <bits/stdc++.h>
/*
Task    :   plab017
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

vector <int> v;
int actnum, temp, temp2;
string cmd;

void com()
{
    cin >> cmd;

    if (cmd == "v_i_b_a")
        {
            cin >> temp2;
            for(int i=0; i<temp2; i++)
                {
                    cin >> temp;
                    v.push_back(temp);
                }
        }

    else if (cmd == "v_i_b")
        {
            cin >> temp;
            v.push_back(temp);
        }
    else if (cmd ==  "v_p_f")
        {
            cout << v.front() << endl;
        }

    else if (cmd ==  "v_p_l")
        {
            cout << v.back() << endl;
        }

    else if (cmd ==  "v_p_a")
        {
            cout << *v.begin();
            for (auto it = (v.begin()+1); it != v.end(); it++)
                {
                    cout << ' ' << *it;
                }
             cout << endl;
        }

    else if (cmd ==  "v_p_pos")
        {
            cin >> temp;
            cout << v.at((temp-1)) << endl;
        }

    else if (cmd ==  "v_p_size")
        {
            cout << v.size() << endl;
        }

    else if (cmd ==  "v_d_b")
        {
            v.pop_back();
        }
}

int main()
{
    cin >> actnum;
    for(int i = 0; i<actnum ; i++)
        {
            com();
        }
}
