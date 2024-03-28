#include <iostream>
#include <vector>
#include <algorithm>
/*
10
2 2 2 1 2 2 13 11 1 2
20 8 15 1 10 5 19 19 3 5

5
3 2 2 3 1
5 3 4 1 2
*/
using namespace std;
using ll = long long int;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
    int n ;
    cin >> n;
    vector<ll> temp(n);
    vector<ll> arr;
//    vector<ll> lis(n,1);
//    vector<bool> flg(n,false);

//    ll mx = -3;

    for(int i =0; i < n ; i++)
	{
		cin >> temp[i];
	}
    for(int i =0; i < n ; i++)
	{
		ll tmp;
		cin >> tmp;
		tmp -= temp[i];
		if(tmp >= 0 )
		{
			arr.push_back(tmp);
		}
//		arr[i] = -1*(arr[i] - temp[i]);
//		arr[i] = temp[i] - arr[i];
//		mx = max(mx,arr[i]);
	}
	reverse(arr.begin(), arr.end());

	// Longest Non-increasing subsequence
	// (Write LIS, but in negative)
//
//	vector<ll> last(n);
//	last[0] = arr[0];
	vector<ll> last;
	last.push_back(arr[0]);
	n = arr.size();
//	int len = 1;
	for(int i = 1 ; i < n ; i++)
	{
		auto b = last.begin();
//		auto t = last.begin() + len;
//		auto itr = lower_bound(b,t, arr[i]);
		int idx = upper_bound(last.begin(),last.end(), arr[i]) - b;
//		int idx = upper_bound()

		if (last.size() > idx)
		{
			last[idx] = arr[i];
		}
		else
		{
			last.push_back(arr[i]);
		}
	}
	cout << last.size();
}
