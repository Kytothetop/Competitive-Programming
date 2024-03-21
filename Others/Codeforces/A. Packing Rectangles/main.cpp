#include <bits/stdc++.h>

using namespace std;
using lli = long long int;
int main()
{
    lli w, h, n;
    cin >> w >> h >> n;
    // k*k >= n*h*w
    // (k/w) * (k/h) >= n
    lli l = 0, r = 1;
    while ((r/w) * (r/h) < n)
        {
            r*=2;
        }

    // Binary-Search
    lli mid;
    while(l < r)
        {
            mid = l + (r-l)/2;
            if((mid/w) * (mid/h) < n)
            {
            	l = mid+1;
            }
            else
				r = mid;

        }
    cout << l;
    return 0;
}
