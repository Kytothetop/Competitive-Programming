#include <iostream>

using namespace std;
int cnt = 0;
int func(int n)
{
	cnt++;
    if(n == 0) return 0;
    return n+func(n-1);
}

int main()
{
    int n,h;
    cin >> h >>n;
    int m =func(n);
    cout << h+m << ' ' << cnt;
}
