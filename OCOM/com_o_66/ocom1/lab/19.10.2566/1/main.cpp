#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,sum =0;
    cin >> n;
    vector<long long int>arr(n), brr(n), crr(n);
    for (int i =0; i <n ; i++ )
        {
            cin >> arr[i];
        }
    for (int i =0; i <n ; i++ )
        {
            cin >> brr[i];
        }
    // 1 3 5 7 9 11 13 15
    sort(arr.begin() , arr.end());
    sort(brr.begin(),brr.end(),greater<long long int>());
    for (int i =0; i <n ; i++ ) crr[i] = arr[i] + brr[i];

	cout << *max_element(crr.begin(), crr.end()) - *min_element(crr.begin(), crr.end());

}
