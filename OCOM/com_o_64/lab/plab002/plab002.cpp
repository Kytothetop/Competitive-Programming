#include <iostream>
/*

Task    :   plab002
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int cal(int wot, int qua){
    if (wot > 100 || wot < 0)
    {
       cout << "error";
    }
    else
    {
        if (wot <= qua)
        {
            cout << "loss";
        }
        else
        {
            cout << "win";
        }

    }
}
int main()
{
    int x,y;
    cin >> x;
    cin >> y;
    cal(x,50);
    cout << " ";
    cal(y,60);
}
