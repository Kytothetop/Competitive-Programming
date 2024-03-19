#include <bits/stdc++.h>
/*
Task    :   plab017
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU061
*/
using namespace std;

vector <int> v;
void com()
{
    string cmd;
    cin >> cmd;
    switch (cmd[2])
        {
        case 'i':	// v_i
            switch (cmd.length())
                {
                case 5:	// v_i_b
                    int temp;
                    cin >> temp;
                    v.push_back(temp);
                    break;
                case 7:	// v_i_b_a
                    int temp1;
                    cin >> temp1;
                    while(temp1--)
                        {
                            int temp2;
                            cin >> temp2;
                            v.push_back(temp2);
                        }
                    break;

                default:
                    break;
                }

            break;


        case 'p':	//v_p
            switch (cmd[4])
                {
                case 'f':
                    cout << v.front() << '\n';
                    break;
                case 'l':
                    cout << v.back() << '\n';
                    break;
                case 'a':
                    for(int i =0; i < v.size(); i++)
                        {
                            cout << v[i];
                            if(i<v.size()-1) cout << ' ';
                        }
                    cout << '\n';
                    break;
                case 'p':
                    int temp;
                    cin >> temp;
                    cout << v[temp-1] << '\n';
                    break;
                case 's':
                    cout << v.size() << '\n';
                    break;

                default:
                    break;
                }
            break;

        case 'd':	//v_d_b
            if(!v.empty())v.pop_back();
            break;

        default:
            break;
        }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int actnum;
    cin >> actnum;
    while(actnum--)com();
    cout << "OK";
    return 0;
}
