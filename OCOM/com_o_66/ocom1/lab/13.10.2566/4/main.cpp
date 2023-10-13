#include <iostream>

using namespace std;
const int rate = 250;
bool func(int h, int n)
{
#define owe h*rate
    if(owe > n) return 0;
    cout<< "\nTotal: " << owe
        << "\nPay: " << n
        << "\nChange: " << n-owe
        << (n != owe ? "\nHas Changes" : "\nNo Changes");


}
int main()
{
    int h,n;
    cout << "Enter hour: ";
    cin >> h;
    cout << "Enter money: ";
    while(cin >> n)
        {
            if(func(h,n))break;
        	cout << "Enter money: ";
        }
    return 0;
}
