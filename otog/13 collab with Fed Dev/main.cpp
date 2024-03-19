#include <bits/stdc++.h>

using namespace std;
bool cal()
{
	int x; // People num
	cin >> x;
	pair<int,int> arr;
	int first = INT_MIN,last = INT_MAX;
	for (int i =0;i <x ;i++ )
	{
		cin >> arr.first >> arr.second;
		first = max(arr.first,first);
		last = min(arr.second,last);
	}
//	cout << first << ' ' << last;
	if(first > last)return 0;
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cout << ((not cal()) ? "yes" : "no");
		if(t > 0)
			cout << '\n';
	}
}
/*
#include <bits/stdc++.h>

using namespace std;
bool cal()
{
	int x; // People num
	cin >> x;
	pair<int,int> arr[x];
	for (int i =0;i <x ;i++ )
	{
		cin >> arr[i].first >> arr[i].second;
	}
	int first = INT_MIN,last = INT_MAX;
	for (int i =0 ;i <x ;i++ )
	{
		first = max(arr[i].first,first);
		last = min(arr[i].second,last);

	}
//	cout << first << ' ' << last;
	if(first > last)return 0;
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cout << ((not cal()) ? "yes" : "no");
//		if(t > 1)
			cout << '\n';
	}
}

*/
