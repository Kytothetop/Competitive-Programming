#include <iostream>

using namespace std;
void func(int n)
{
	if(n==1){cout << 1;return;}
	if(n%2==0){cout << n << ' '; func(n/2);}
	if(n%2==1){cout << n << ' '; func((n*3)+1);}
}
int main()
{
    int n;
    cin >> n;
    func(n);
}
