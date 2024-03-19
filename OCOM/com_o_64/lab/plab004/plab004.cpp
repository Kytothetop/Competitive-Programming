#include <iostream>
/*
Task    :   Multiplication table
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    cin >> m;
    switch(n){
        case 1:
            switch(m)
                {
                    case 1:
                        cout << "SE";
                        break;
                    case 2:
                        cout << "CN";
                        break;
                    case 3:
                        cout << "GP";
                        break;
                }
        break;

        case 2:
            switch(m)
                {
                    case 1:
                        cout << "IM";
                        break;
                    case 2:
                        cout << "DM";
                        break;
                }
        break;

        case 3:
            switch(m)
                {
                    case 1:
                        cout << "WG";
                        break;
                    case 2:
                        cout << "GI";
                        break;
                    case 3:
                        cout << "DF";
                        break;
                }
        break;
        default:
            cout << "NS";
    }
}
