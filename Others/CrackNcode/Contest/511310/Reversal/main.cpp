#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    int n = 1 << m;
//    cout << n;
	vector<int> arr(n);
	vector<int> brr(n);
	for(int i =0; i < n ; i++)
	{
		cin >> arr[i];
	}
	for(int i =0; i < n ; i++)
	{
		cin >> brr[i];
	}
}
