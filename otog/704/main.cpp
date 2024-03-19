#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
	int a[n];
	for (int i =0;i < n ;i++ )
	{
		int temp;
		cin >> a[i] >> temp;
		a[i]+=temp;
		if(i > 0)
		{
			a[i] += a[i-1];
		}
	}
//	for (int i=0; i<n ;i++ )
//	{
//		cout << a[i] << '\n';
//	}
	cin >> m;
	int t;
	for (int i =0;i<m ;i++ )
	{
		cin >> t;
		cout << distance(a,upper_bound(a,a+n,t));
		if(i<m-1)
			cout << '\n';
	}
}
