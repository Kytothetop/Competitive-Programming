#include <iostream>
#include <cmath>

using namespace std;
/*
TASK: hotel
LANG: C++
AUTHOR: Kritanan Phinyo
CENTER: KKU039
*/
int n;
int price = 0;
void cal(int people =0, int charge =0)
{
    price += (floor(n/people))*charge;
    n = n%people;
    //cout << n << endl << price<< endl;
}
int main()
{

    cin >> n;

    if(n>=15)
        {
            cal(15,3000);
            if(n>=9)
            {
                cal(n,3000);
            }
        }
    if(n>=5)
        {
            cal(5,1500);
            if(n>=4)
            {
                cal(n,1500);
            }
        }
    if(n>=2)
        {
            cal(2,800);
        }
    if(n==1)
        {
            cal(1,500);
        }
    cout << price;
    return 0;
}
