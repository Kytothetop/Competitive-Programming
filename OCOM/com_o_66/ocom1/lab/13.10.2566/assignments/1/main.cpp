#include <iostream>

using namespace std;

int func(int n)
{
	if(n == 1) return 1;
    return n*n+func(n-1);
}

int main()
{
    int n;
    cin >>n;
	cout << 2*n << ' ' << func(n);
}
