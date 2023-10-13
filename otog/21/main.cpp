#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> s;

    int cnt = 0;

    int repeat = 1;
    for(char e : str)
        {
            switch (e)
                {
                case '(':
                    cnt = 0;
                    break;
                case ')':
                    repeat *= (cnt+1);
                    cnt = 0;
                    break;
                case 'a':
                    break;
                case 'i':
                    cnt++;
                    break;


                default:
                    break;
                }

        }
    repeat *= (cnt+1);
    cout << repeat;
    return 0;
}
