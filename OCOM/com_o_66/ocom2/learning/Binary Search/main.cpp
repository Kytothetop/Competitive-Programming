#include <iostream>
#include <algorithm>
#include <time.h>
#include <math.h>

using namespace std;
#define lli long long int
lli num(lli lim = 100)
{
    return rand()%lim;
}
pair<lli,lli> bisearch(lli *arr, lli L , lli R, lli key)
{
	if(L > R)
	{
		return {-1,0};
	}
		lli mid = L + ((R-L)/2);
		cout << '\n' << arr[mid];
		if(arr[mid] > key)
		{
			return bisearch(arr,L,mid-1,key);
		}

		else if(arr[mid] < key)
		{
			return bisearch(arr,mid+1,R,key);
		}
		else
		{
			return {mid,arr[mid]};
		}
}
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    srand(time(NULL));
    lli n = 256;
    lli arr[n];
    for(lli i =0; i<n; i++)
	{
		arr[i] = num(n*10);
//		cout << arr[i] << ' ';
	}
	cout << '\n';
	sort(arr,arr+ sizeof(arr)/sizeof(lli));

	for(lli i =0; i< n ; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << "\nKey:\n";
	lli key;
//	cin >> key;
	key = arr[num(n)];
	cout << '\n' << key << '\n';
	auto ff = bisearch(arr,0,n-1,key);
	if(ff.first != -1)
	{
		cout << "\nFound " << ff.second << " at " << ff.first+1;
	}
	else
		cout << "Not Found.";
//	while(L<=R)
//	{
//		mid = L + ((R-L)/2);
//		cout << '\n' << arr[mid];
//		if(arr[mid] > key)
//		{
//			R = mid-1;
//		}
//
//		else if(arr[mid] < key)
//		{
//			L = mid+1;
//		}
//
//		else
//		{
//			cout << "\nFound " << arr[mid] << " at " << mid+1;
//			break;
//		}
//	}
//	if(arr[mid] != key)
//	{
//		cout << "\nNot Found.";
//	}
}
