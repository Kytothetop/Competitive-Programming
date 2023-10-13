/*#include <bits/stdc++.h>

using namespace std;
int n, l, r;
map<int,int> mp;
int brk(int m)
{
    if(mp[m] != 0) return mp[m];
    if(m < (l+r)) return 1;
    int left = (m*l)/(l+r);
    int right = (m*r)/(l+r);
    mp[left] = brk(left);
    mp[right] = brk(right);
    return  mp[left] + mp[right];
}
int main()
{
    cin >> n >> l >> r;
    cout << brk(n);
//    cout << total;
}*/

#include <bits/stdc++.h>

using namespace std;
int n, l, r;
map<int,int> mp;
int brk(int m)
{
    if(m<l+r)
        {
            mp[m] = 1;
            return 1;
        }
    else if(mp.count(m)!=0)
        {
            return mp[m];
        }
    else
		mp[m] = brk(floor(m*l/(l+r))) + brk(floor(m*r/(l+r)));
        return brk(floor(m*l/(l+r))) + brk(floor(m*r/(l+r)));
}
int main()
{
    cin >> n >> l >> r;
    cout << brk(n);
//    cout << total;
}

/*
#include <bits/stdc++.h>

using namespace std;
int n, l, r;
map<int,int> mp;
int brk(int m)
{
    if(m<l+r) return 1;
    mp[l] = brk(floor(m*l/(l+r)));
    mp[r] = brk(floor(m*r/(l+r)));
	return mp[l]+ mp[r];
}
int main()
{
    cin >> n >> l >> r;
    cout << brk(n);
//    cout << total;
}

*/
