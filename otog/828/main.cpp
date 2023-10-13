#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt =0, sum =0;
    float x;
    cin >> n;
    int arr[n];
    for(int i =0 ; i< n; i++)
        {
            cin >> arr[i];
        }
    for(int i =1 ; i<= (n-2); i++)
        {
            x = floor((arr[i-1] + arr[i] + arr[i+1])/3);
            if(arr[i] < x)
                {
                    cnt++;
                    arr[i] = x;
                }
        }
    for(int i =0 ; i< n; i++)
        {
//            cout << arr[i] << ' ';
            sum += arr[i];
        }
//        cout << '\n';
    cout << cnt <<' '<< sum;
}
