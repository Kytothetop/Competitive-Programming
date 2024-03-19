#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx=INT_MIN, mn = INT_MAX;
    for(int i =0;i <n;i++)
	{
		int temp;
		cin >> temp;
		if(temp > mx)
			mx = temp;
		if(temp < mn)
			mn = temp;
	}
	cout << mn << ' ' << mx;
}
