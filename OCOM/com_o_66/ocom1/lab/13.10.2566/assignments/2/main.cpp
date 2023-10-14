#include <iostream>

using namespace std;
int cnt = 0;
int func(int n)
{
	cnt++;
    if(n == 1 || n == 0)
        {
            return n;
        }
    return func(n-1) + func(n-2);
}

int main()
{
    int n;
    cin >>n;
    int m =func(n);
    cout << cnt << ' ' << m;
}
