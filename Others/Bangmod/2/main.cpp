#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int,int> arr[n];
	for (int i =0;i<n ;i++ )
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr+n, greater<pair<int,int>>());
	int k;
	cin >>k;

	while()

}
