#include <iostream>

using namespace std;
int n, m;
vector<int> arr;
int ans;
bool yy()
{

}
int main()
{
    cin >> n >> m;
    arr.resize(n);
    for(int i =0; i  < n ; i++)
        {
            cin >> arr[i];
        }
	int l =0; r= 1;
	int mid = l + (r-l)/2;
	while(not yy(arr[mid])) r << 1;
	while(l < r)

}
