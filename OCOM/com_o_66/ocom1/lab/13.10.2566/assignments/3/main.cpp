#include <iostream>

using namespace std;

void func(int n,int i = 1)
{
    cout << i;
    if(i <= n)
	{
		cout << ' ';
		func(n,i+1);
	}

}

int main()
{
	int m;
    cin >>m;
    func(m);
}
