#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i =0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    int x = 0;
    for(int i =0 ; i < m ; i++)
    {
        cin >> x;
        auto it = lower_bound(arr,arr+n,x);
        if(it != arr+n && *it == x)
            cout << (it-arr);
        else
        cout << -1;
        if(i < m-1)cout <<'\n';
    }
    return 0;
}
