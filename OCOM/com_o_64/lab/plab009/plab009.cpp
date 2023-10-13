#include <iostream>

using namespace std;

/*
Task    :   plab009
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/


char getgrades(int Sc)
{
    switch (Sc)
        {
        case 80 ... 100:
            return 'A';
            break;
        case 70 ... 79:
            return 'B';
            break;
        case 60 ... 69:
            return 'C';
            break;
        case 50 ... 59:
            return 'D';
            break;
        case 0 ... 49:
            return 'F';
            break;
        default:
            break;
        }
}

int main()
{
    int     n,m;
    cin >>  n;
    string  First[n],Last[n];
    int     Score[n];
    for(int i = 0; i<n; i++)
        {
            cin >>  First[i] >> Last[i] >> Score[i];
        }
    cin >>  m;
    string  q1[m],q2[m];
    for(int i = 0; i<m; i++)
        {
            cin >>  q1[i] >> q2[i];
        }

    for(int j = 0; j<m; j++)
        {
            for(int i = 0; i<n ; i++)
                {
                    if(q1[j] == First[i] && q2[j] == Last[i])
                        {
                            cout << First[i] << ' ' << Last[i] << ' ' << Score[i] << ' ' << getgrades(Score[i]) <<endl;
                        }
                }
        }

    return 0;
}
