#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << 2000*(pow(1.05,10));
    //an = a1(r^n-1)/r-1
    double n = 2000; int cnt = 0;
    while(n<4000)
    {
		n *= 1.05;
		cnt++;
    }
    cout << '\n';
    cout << cnt;
}
