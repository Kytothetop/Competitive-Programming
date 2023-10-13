#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    string arr [m];
    for(int i = 0 ; i<m; i++)
        {
            cin >> arr[i];
        }
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int i = 0; i < (n-1); ++i)
        {cout << arr[i] << endl;}
    cout << arr[n-1];

    return 0;
}
