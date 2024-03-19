#include <bits/stdc++.h>

using namespace std;
/*

4

10
20
15
17

13
17
19
16

*/
/*
4

10
15
17
20

19
17
16
13
*/
// 10 15 16 13
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n], brr[n];
    for (int i =0; i <n ; i++ )
        {
            cin >> arr[i];
        }
    for (int i =0; i <n ; i++ )
        {
            cin >> brr[i];
        }
    sort(arr,arr+n);
    sort(brr,brr+n,greater<long long int>());

    long long int mx = INT_MIN;
	for (int i =0;i<n ;i++ )
	{
		mx = max(mx, min(arr[i], brr[i]));
	}
	cout << mx;
}
