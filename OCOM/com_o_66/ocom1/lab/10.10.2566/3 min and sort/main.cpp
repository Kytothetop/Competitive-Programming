#include <iostream>

using namespace std;

int main()
{
	int a = 1,b = 2,c = 3;
	cin >> a >> b >> c;
    if(a>b)swap(a,b);
    if(b>c)swap(b,c);
    if(a>b)swap(a,b);
    cout << "Min: " << a << '\n';
    cout << "Sorted: "<< a << ' ' << b << ' ' << c;
}
