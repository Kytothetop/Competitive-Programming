#include <iostream>

using namespace std;

int func(int &x , int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5;
    int y = 10;
    func(x,y);
    cout << x << ' ' << y;
    return 0;
}
