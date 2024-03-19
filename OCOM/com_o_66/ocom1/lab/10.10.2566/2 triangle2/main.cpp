#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y,z;
    cin >> x >> y >> z;
    if(z < y)swap(z,y);
    if(z < x)swap(z,x);
    if(pow(z,2) == pow(x,2) + pow(y,2)) cout << "Right Triangle"; else cout << "Not Right Triangle";
}
