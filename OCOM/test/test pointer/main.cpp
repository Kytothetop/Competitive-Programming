#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    x += 30;
    cout << *ptr << '\n';
    *ptr += 40;
    cout << x << '\n';
    return 0;
}
