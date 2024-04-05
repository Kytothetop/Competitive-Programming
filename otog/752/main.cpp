#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    int arr[n];
    for(int i =0 ; i<n; i++)
        {
            cin >> arr[i];
            if( i != 0)
                {
                    arr[i] += arr[i-1];
                    if(arr[i] < arr[i-1])arr[i] = arr[i-1];
                }

        }

        cout << '\n';
    for(int i =0 ; i <n; i++)
	{
		cout << arr[i] << ' ';
	}
        cout << '\n';
    int temp;
    for(int i =0 ; i<q; i++)
        {
            cin >> temp;
            int idx;
            idx = upper_bound(arr, arr+n, temp) - arr;
//            idx = n;
//			for(int j =0 ; j < n ; j++)
//			{
//				if(temp <= arr[j])
//				{
//					idx = j;
//					break;
//				}
//			}
            if(idx == n)
			{
				cout << -1 << '\n';
			}
			else
			cout << idx <<'\n';
        }

}
