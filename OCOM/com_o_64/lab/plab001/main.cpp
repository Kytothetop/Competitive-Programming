#include <iostream>
#include <bits/stdc++.h>
/*
Task    :   plab001
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/

using namespace std;

int main()
{
    float radius, area, cir, pi;
    pi = 3+(1.0/7);
    cin >> radius;
    area = pi * radius * radius;
    cir = pi * radius * 2;
    printf("%.2f\n",area);
    printf("%.2f\n",cir);

}
