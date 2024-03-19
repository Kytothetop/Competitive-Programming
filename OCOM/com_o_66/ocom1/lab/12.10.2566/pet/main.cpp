#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 5;
    int arr[n] = {0};
    int mx= INT_MIN;
    int wow;

    for (int i =0; i<n ; i++ )
        {
            for (int j =0; j <n-1 ; j++ )
                {
                    int temp;
                    cin >> temp;
                    arr[i] += temp;
                }
            if(arr[i] > mx)
                {
                    mx = arr[i];
                    wow = i;
                }
        }
    cout << wow+1 << ' '<< arr[wow];

}
