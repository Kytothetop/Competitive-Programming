#include <bits/stdc++.h>
/*
2
6
a 1 a 2 a 3 b c 2 b
5
a 1 a 5 e d 5 d 2
*/
using namespace std;
void solve()
{
    set<int> s;
    int q;
    cin >> q;
    int temp;
    char act;
    for(int ijk = 0; ijk <q; ijk++)
        {
            cin >> act;

            switch (act)
                {
                case 'a':
                {
                    cin >> temp;
                    s.insert(temp);
                }
                break;


                case 'b':
                {
                    auto it = s.begin();
                    for(int i =0; i < s.size() ; i++)
                        {
                            cout << *it;
//                            if(i < s.size()-1)
//                            if(ijk < q-1)
								cout <<' ';
                            it++;
                        }
//					for(auto e : s)
//						cout << e << ' ';
                }
                break;


                case 'c':
                {
                    cin >> temp;
                    if(s.find(temp) != s.end())
                        s.erase(temp);
                }
                break;

                case 'd':
                {
                    cin >> temp;
                    if(s.find(temp) == s.end())
                        cout << -1;
                    else cout << 1;
//                    if(ijk < q-1)
						cout <<' ';
                }

                break;
                case 'e':
                {
                    cout << s.size();
//                    if(ijk < q-1)
						cout <<' ';
                }
                break;

                default:
                    break;
                }

        }
}
int main()
{
//	ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >>t;
    for(int i =0; i<t; i++)
        {
            solve();
            if( i < t-1) cout << '\n';
        }
}
