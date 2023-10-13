#include <iostream>

using namespace std;

int main()
{
    int money = 4800, pan =0, ha =0, hasip = 0, roy=0, yee=0;
    cin >> money;
    while (money>=1000)
        {
            money-=1000;
            pan++;
        }
    while (money>=500)
        {
            money-=500;
            ha++;
        }
    while (money>=100)
        {
            money-=100;
            roy++;
        }
    while (money>=50)
        {
            money-=50;
            hasip++;
        }
    while (money>=20)
        {
            money-=20;
            yee++;
        }
    cout << "Bank 1000: " << pan
         <<"\nBank 500: " << ha
         <<"\nBank 100: " << roy
         <<"\nBank 50: " << hasip
         <<"\nBank 20: " << yee;
}
