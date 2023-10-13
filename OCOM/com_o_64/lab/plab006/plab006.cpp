#include <bits/stdc++.h>
/*
Task    :   plab006
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
    int m,n,k,g;
    int sum = 0;
    int b = 0;
    cin >> m >> n >> k >> g;
        for(int i=m; i<=n;i++)
        {
            if(i%10==k || i%10==g)
            {
                cout << i << endl;
                sum += i;
                b += 1;
            }
        }
        cout << b << ' ' << sum;
}
