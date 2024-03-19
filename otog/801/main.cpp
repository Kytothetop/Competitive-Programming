#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);                                 // Idk what this does lol
    int n,m;cin >> n >> m;                                                  // Input snack amounts & customer amounts
    int arr[n];                                                             // Snack price array
    for(int i = 0 ; i < n ; i++)cin >> arr[i];                              // Input snack prices
    sort(arr,arr+n); for(int i = 1 ; i < n ; i++)arr[i] += arr[i-1];        // Dynamic programming prefix sum // sort then make each index: sum of itself and previous values
    for(int j = 0 ; j < m ; j++)                                            // Loop customer
    {
        int c = 0,cnt = 0;                                                  // customer & count
        cin >> c;                                                           // Input customer money
        cnt = lower_bound(arr,arr+n,c) - arr;                               // Make cnt the index via (address - address) method -> lower_bound of money
        cout << ((arr[cnt]==c) ? cnt+1 : cnt); if(j < m-1) cout << '\n';    // Output: +1 if the lower_bound value equals money, Give endl if not the last customer
    }
    return 0;
}
