#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d, sum = 0;
    cin >> n >> d;
    int arr[n], brr[n];
    bool flg[n];

    for(int i =0 ; i < n ; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int k = sum/d;

    //Eliminate lower arr cities by giving them 1 gem (Not sure if it works, but I don't know what else to do lol)
    for(int i =0 ; i < n ; i++)
    {
        if(arr[i] < k)
        {
            brr[i] = arr[i]/(round(arr[i]/(double)k));
            flg[i] = true;
            d--;
            sum -= arr[i];
        }
    }



    k = sum/d; // Ideal Xbar of brr in each city with higher arr
    int mx = INT_MIN;
    for(int i =0 ; i < n ; i++)
    {
        if((!flg[i]))
        {
            brr[i] = arr[i]/(round(arr[i]/(double)k));
            //cout << brr[i] << ' ';
        }
        mx = max(mx,brr[i]);
    }
    //cout << '\n';
    cout << mx;


}
