#include <iostream>
#include <bits/stdc++.h>
/*

Task    :   circlebutyes
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/

using namespace std;

float radius, area, cir, pi;

int choose()
{
    int choice;
    cout << "Which pi do you want?\n";
    cout << "[1] pi = 3.14\n";
    cout << "[2] pi = 22/7\n";
    cout << "[3] pi = atan(1) * 4\n";
    cout << ": ";
    cin >> choice;
    cout << "\n";
    if (choice == 1)
        pi = 3.14;
    else if (choice == 2)
        pi = 22.0/7;
    else if (choice == 3)
        pi = atan(1) * 4;
    else
        choose();
}

int main()
{
    bool another;
    choose();
    cout << "Enter the radius of circle\n: ";
    cin >> radius;
    area = pi * radius * radius;
    cir = pi * radius * 2;
    cout << "\n\n";
    cout << "Radius: " << radius << "\n";
    cout << "Area: " << area << "\n";
    cout << "circumference: " << cir << "\n";
    cout << "When pi = " << pi;
    cout << "\n\nDo you want to calculate another one?\n[Yes:1] [No:0]\n: ";
    cin >> another;
        if (another == 1)
            main();
}
