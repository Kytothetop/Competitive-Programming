#include <iostream>

using namespace std;
/*
4
1 2 4 9
1 3 7 16

1,2:3
1,4:5
2,4:6
1,9:10
2,9:11
4,9:13

*/
/// Idk maybe use set and backtracking? I'm too lazy lol
/// (O(2^n) is big tho, probably not the best idea)
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    cin >> arr[0];
    int cl;
    for(int i =1; i < n ; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i-1];
		if(i == n-1)cl = arr[i];
	}
//	auto itr = lower_bound(arr.begin(),arr.end(),cl);
}
