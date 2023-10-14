#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double arr[n], mx = INT_MIN, mn = INT_MAX, sum = 0;
	for(auto &e : arr) cin >> e;
	for(auto &e : arr){if(e>mx)mx=e;if(e<mn)mn=e;sum+=e;}
	cout << "Min: " << mn << '\n' << "Max: " << mx << '\n' << "Sum: " << sum << '\n' << "Average: "<< sum/n;

}
