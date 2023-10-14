#include <iostream>

using namespace std;
int cnt = 0;
void func(int n)
{
	cnt++;
	if(n>1)func(n-1);
	cout << n << ' ';
	if(n>1)func(n-1);
}
int main()
{
    int n;
    cin >> n;
    func(n);
    cout << '\n' << cnt*2;
}
