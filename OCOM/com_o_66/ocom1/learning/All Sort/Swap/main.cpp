#include <iostream>

using namespace std;
void swp(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
    int a,b;
    cin >> a >> b;
    swp(a,b);
    cout << a << ' ' << b;
}
