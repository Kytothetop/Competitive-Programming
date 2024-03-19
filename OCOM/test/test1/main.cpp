#include <iostream>
#include <bits/stdc++.h>
/*

Task    :   testlab
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

float a,b,c; // global variable

int main()
{
    cout << "Hello world!\n";

    cout <<"You will type 2 numbers to calculate Hypotenuse using the Pythagorean Theorm\n";

    cout << "Type side a: ";
    cin >> a;
    cout << "Type side b: ";
    cin >> b;

    float a2 = pow(a, 2);
    float b2 = pow(b, 2);

    c = sqrt(a2 + b2);

    cout << "The 3 Sides via Pythagorean Theorm:\n" << "Side A: " << a << "\nSide B: " << b << "\nSide C(Hypotenuse): " << c << "\n";
    return 0;
}
