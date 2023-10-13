#include <bits/stdc++.h>
/*
Task    :   plab010
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    int Aa[n],Ee[n],Ii[n],Oo[n],Uu[n];
    for(int i = 0; i<n; i++)//i -> word ->line
        {
            cin >>  s[i];
            Aa[i] = 0;
            Ee[i] = 0;
            Ii[i] = 0;
            Oo[i] = 0;
            Uu[i] = 0;
            for (int j=0 ; j<s[i].length(); j++)//j -> each char in word
                {
                    Aa[i] = count(s[i].begin(), s[i].end(), 'A') + count(s[i].begin(), s[i].end(), 'a');

                    Ee[i] = count(s[i].begin(), s[i].end(), 'E') + count(s[i].begin(), s[i].end(), 'e');

                    Ii[i] = count(s[i].begin(), s[i].end(), 'I') + count(s[i].begin(), s[i].end(), 'i');

                    Oo[i] = count(s[i].begin(), s[i].end(), 'O') + count(s[i].begin(), s[i].end(), 'o');

                    Uu[i] = count(s[i].begin(), s[i].end(), 'U') + count(s[i].begin(), s[i].end(), 'u');

                }
            cout << Aa[i] << ' ' << Ee[i] << ' ' << Ii[i] << ' ' << Oo[i] << ' ' << Uu[i];
            if (i<(n-1))
                {
                    cout << endl;
                }
        }
}
