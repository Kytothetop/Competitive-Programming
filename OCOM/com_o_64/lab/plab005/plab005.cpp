#include <iostream>
/*
Task    :   plab005
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
    int sum = 0;
    int c = 1;
    int n,d;
    cin >> n >> d;
    for (int i=1; i<=n ; i++)
        {
            if(i==1)
                {
                    cout << c;
                }
            else
                {
                    cout << " " << c;
                }
            sum = sum + c;
            c = c + d;

        }
    cout << '\n' << sum;
}
