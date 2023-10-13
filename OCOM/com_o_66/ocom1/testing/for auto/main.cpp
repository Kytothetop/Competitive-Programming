#include <iostream>

using namespace std;

int main()
{
	int n = 10;
    int arr[n];
//    for (int i =0;i<n ;i++ )
//    {
//    	arr[i] = i*i;
//    }

    for(auto &e : arr)cin>> e;
    for(auto &e : arr)cout << e << '\n';
}
