#include <vector>
#include <iostream>

using namespace std;
vector<int> arr;int n,k,l;
vector<bool> f;

void recur(int i,int c =0)
{
	if(i == n)return;
	if(f[i])cout << arr[i] << ' ';
	f[i] = 0;
	recur(i+1);
	f[i] = 1;
	recur(i+1);

}



int main()
{
	///Combination

    cin >> n >> k >> l;
    arr.resize(n);
    f.resize(n);
    for(int i=0; i < n ; i++)
	{
		arr[i] = i+1;
	}
	recur(0);
//    int arr[n];

}
