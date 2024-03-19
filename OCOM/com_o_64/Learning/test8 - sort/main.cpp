#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// The array will be sorted.
// The first one is the array size.
// The last one is key(the one we search for.)
/*
10

5
2
8
16
12
38
23
56
91
72

23
*/
int n = 0;
int d[1005] = {0};

int L = 0, M = 0, H =0;
int key = 0;
int pos = 0;
string fsearch(int l, int h, int k)   //Return "found" or "not found"
{
    int m;
    if (l>h)
        {
            return "not found";
        }
    m=(l+h)/2;
    if(d[m]==k) //found
        {
            pos = m;
            return "found";
        }

    else if(d[m]<k)
        {
            return fsearch(m+1,h,k);
        }
    else
        {
            return fsearch(l,m-1,k);
        }
    return "not found";
}

int main()
{
    int i,j,x,y,r;
    cin >> n;
    for(i=0; i<n; i++)
        {
            cin >> x;
            d[i] = x;
        }
    cin >> key;
    sort(d, d + n);
    for (int i = 0; i < n; ++i)
        cout << d[i] << " ";

    H = n-1;
    cout << fsearch(L, H, key) << ' ' <<key << " at " << (pos+1) <<endl;
    return 0;
}
