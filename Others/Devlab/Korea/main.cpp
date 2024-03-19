#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int mx = -1, arr[n];
    for (long long int i =0;i<n ;i++ )
    {
    	cin >> arr[i];
    	for(long long int j = 0; j <i ; j++)
    	mx = max(__gcd(arr[i],arr[j]),mx);
    }
    cout << mx;
}
