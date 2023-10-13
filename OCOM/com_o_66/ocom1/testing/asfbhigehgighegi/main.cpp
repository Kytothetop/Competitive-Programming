#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define pi atan(1)*4
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << setprecision(5);
    for(int i =0; i< 10 ; i++)cout << pi*i << endl;
    int n = 10;
    for(int i =0; i<n ; i++ )
        {
            for(int j =0; j<i ; j++ )
                {
                    cout << '-';
                }
            cout << '\n';

        }
    for(int i =0; i<n ; i++ )
        {
            for(int j =0; j<n-i ; j++ )
                {
                    cout << '*';
                }
            cout << '\n';

        }


    int a = 1,b = 2,c = 3;
    if(a>b)swap(a,b);
    if(b>c)swap(b,c);
    if(a>b)swap(a,b);
    cout << a << ' ' << b << ' ' << c;
    return 0;
}
