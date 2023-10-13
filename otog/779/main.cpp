#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,sum = 0;
	cin >> n >> m;
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
//	int* a = &arr[0];
	int i =0;
	for(int j = 0 ; j < m ; j++)
	{
		if((arr[i] > arr[i-1]) && i != 0)
		{
			i--;
		}
		else if(arr[i] > arr[i+1])
		{
			i++;
		}

		sum += arr[i];

//		cout << arr[i] << ' ';
		arr[i] = floor(double(arr[i])*105/100);

	}
	cout << sum;
}
