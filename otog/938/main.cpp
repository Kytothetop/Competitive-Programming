#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    int a[n];
    for (int i =0; i<n ; i++ )
        {
            cin >> a[i];
        }

    for (int i =0; i<q ; i++ )
        {
            int l,r,x;
            cin >> l >> r >> x;
//            for(auto j = lower_bound(a,a+n,l); j < upper_bound(a,a+n,r); j++)
			auto j = upper_bound(a,a+n,r);
			j--;
			bool ex = false;
            for(; j >= lower_bound(a,a+n,l); j--)
			{
//				cout << *j << ' ';
				if(__gcd(*j,x) != 1)
				{
					cout << *j;
					ex = true;
					break;
				}
			}
			if(!ex)cout << -1;
			if (i<q-1)cout << '\n';

        }

    return 0;
}
