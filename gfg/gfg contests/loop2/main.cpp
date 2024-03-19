#include <bits/stdc++.h>

using namespace std;

int digitalRoot(int n)
{

    int sum = 0;
    string s = to_string(n);
    for(int i =0 ; i < s.length(); i ++)
        {
            sum += int(s[i] - '0');
        }
    if(sum >= 10) return digitalRoot(sum);

    return sum;
}
int main()
{
    int n = 99999;
    cout << digitalRoot(n);


//string s = to_string(n);
//    cout << s << endl;
//    int sum = 0;
//            for(int i =0 ; i < s.length(); i ++)
//                {
//                    sum += int(s[i] - '0');
//                }
//                cout << sum;
}
