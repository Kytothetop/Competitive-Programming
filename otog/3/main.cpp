#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int> mp;
    int qwerty;
    cin >>qwerty;
    while(qwerty--)
        {
            int total = 0;
            int cnt[26] = {0};
            string str;
            cin >> str;
            for (int i =0; i < str.length() ; i++ )
                {
                    if(str[i] > 'Z')
                        {
                            cnt[((int(str[i]))-32-65)]++;
//                            cout << int(str[i]-32-65) << ' ';
                        }
                    else
                        {
                            cnt[((int(str[i]))-65)]++;
//                            cout << int(str[i]-65) << ' ';
                        }
                }
            sort(cnt,cnt + 26);
            for (int i  =0 ; i < 26 ; i++ )
                {
                    total += (i+1)*cnt[i];
                }
            cout << total << '\n';
        }

}
