#include <bits/stdc++.h>
int n;
using namespace std;
char shift(char &c, int m)
{
    c += m;
    while(c > 'Z')
        {
            c-=26;
        }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    n = str.length();
    int arr[n];
    for (int i =0; i< n ; i++ )
        {
            cin >> arr[i];
        }



    int mx = INT_MIN;
    for(int j = 0; j<26; j++)
        {
            int cnt = 0;
            char ch = str[0];
            for(auto &e : str)
                {
                    if(e == ch)
                        {
                            cnt++;
                        }
                }
            if(cnt > mx)
                {
                    mx = cnt;
                    if(cnt == n)break;
                }
            cnt = 0;
            for(int i =0; i < n ; i++)
                {
                    shift(str[i],arr[i]);
                    for(int k = 0; k <n; k++)
                        {
                        	cnt = 0;
                            if(str[i] == str[k])cnt++;
                            if(cnt > mx)
                                {
                                    mx = cnt;
                                }
                        }
//                    ch = str[0];

                }
//            for(auto &e : str) cout << e << ' ';
//            cout << '\n';
        }
//            for(auto &e : str) cout << e << ' ';
//        cout << str[0];
//    cout << '\n';
    cout << mx;

    return 0;
}
