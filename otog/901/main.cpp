#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int brr[n], in =0;
//    int mx=INT_MIN;
    for(int i =0 ; i<n ; i++)
        {
            cin >> brr[i];
//            if(arr[i] > mx)
//                {
//                    mx = arr[i]; in = i;
//                }
        }
    int sum[n] = {0};
    for(int j =0; j< n; j++)
        {
        	int arr[n];
        	copy(brr, brr+n,arr);
            sum[j] = arr[j];
            for(int i =j+1 ; i<n ; i++)
                {
                    arr[i] = min(arr[i-1],arr[i]);
                    sum[j] += arr[i];
                }
            for(int i =j-1 ; i>=0 ; i--)
                {
                    arr[i] = min(arr[i+1],arr[i]);
                    sum[j] += arr[i];
                }
//			for(int i =0 ; i<n ; i++)
//			{
//				cout << arr[i] << ' ';
//			}
//			cout << '\n';

        }
	cout << *max_element(sum, sum + n);
//	cout << sum + arr[in];
}
