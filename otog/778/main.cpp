#include <bits/stdc++.h>

using namespace std;
int n, l, r, cnt = 0;
void brk(int m)
{
    if(m<l+r)
        {
            cnt++;
            return;
        }

    brk(floor(m*l/(l+r)));
    brk(floor(m*r/(l+r)));
}
int main()
{
    cin >> n >> l >> r;
    brk(n);
    cout << cnt;
}
