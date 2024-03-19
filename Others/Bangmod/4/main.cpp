#include <bits/stdc++.h>


using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int arr[m] = {0};
    for (int i =0; i<m ; i++ )
        {
            for (int j =0; j<n ; j++ )
                {
                	int a;
                	cin >> a;
                	arr[i] += a;
                }
//			cout << arr[i] << '\n';
        }
	cout << *max_element(arr, arr+m);
}
