#include <iostream>
/*
Task    :   plab007
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
    int s,p,h;
    int k = 0, ct=0;
    cin >> s >> p;
    while(k<=(p-s))
    {
        k += s;
        {cout << s << ' ' << k << endl;}
        s ++;
        ct++;
    }
    cout << ct << ' ' << k;
}
