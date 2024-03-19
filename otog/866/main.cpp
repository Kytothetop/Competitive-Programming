#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
	for(int i =0; i <n; i++)
	{
		cin >> arr[i];
	}
	int L = 0;
	int R = n-1;
	int mx = INT_MIN;
	int sm = (min(arr[L],arr[R])) * (R-L);
	for(int i =0; i < n; i++)
	{

		if(arr[L]>arr[R])
		{
			R--;
		}
		else
		{
			L++;
		}
		if(mx<sm)mx = sm;
		sm = (min(arr[L],arr[R])) * (R-L);
	}
	cout <<mx;
}
