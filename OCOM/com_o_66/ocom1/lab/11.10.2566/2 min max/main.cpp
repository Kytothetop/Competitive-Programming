#include <iostream>

using namespace std;

int main()
{
	int mn = INT_MAX, mx = INT_MIN;
    for (int i =0;i<10 ;i++ )
    {
    	int temp;
    	cin >> temp;
    	mn = min(mn,temp);
    	mx = max(mx,temp);
    }
    cout << "Min: " << mn << "\nMax: " << mx;

}
