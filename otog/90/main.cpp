#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d, sum = 0;
    cin >> n >> d;
    int arr[n], brr[n]; // soldier, gem got
    bool flg[n];

    for(int i =0 ; i < n ; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n,greater<int>());
    int k = (sum/d);

    //Eliminate lower arr cities by giving them 1 gem (Not sure if it works, but I don't know what else to do lol)
//    cout << '\n';
//    cout << sum;
//    cout << '\n';
//    cout << k <<':';
    int tmp = n;
    for(int i =0 ; i < n ; i++)
    {
        if(arr[i] < k)
        {
            brr[i] = ceil(arr[i]/(ceil(arr[i]/(double)k)));
            flg[i] = true;
            d--;
            tmp--;
            sum -= arr[i];
//            cout << brr[i] << ' ';
        }
    }



//    cout << '\n';
//    cout << sum;
    k = (sum/d); // Ideal Xbar of brr in each city with higher arr
//    cout << '\n';
//    cout << k <<':';
    int mx = INT_MIN;
    for(int i =0 ; i < tmp ; i++)
    {
        if((!flg[i]))
        {
            for(int j = d ; j >= 0 ; j-- )
            {
                if(i == tmp-1)
                {
                    brr[i] = arr[i] / d;
                    d = 0;
                    break;
                }
                else if(arr[i] / j >= k)
                {
                    d -= j;
                    brr[i] = arr[i]  / j ;
                    break;
                }
            }
//            brr[i] = ceil(arr[i]/(ceil(arr[i]/(double)k)));
//            cout << brr[i] << ' ';
        }
        mx = max(mx,brr[i]);
    }

    //cout << '\n';
    cout << mx;


}
