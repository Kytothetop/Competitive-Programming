#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int arr[n],brr[m];
    for(int i =0; i < n; i++)
        {
            cin >> arr[i];
        }
    sort(arr, arr+n, greater<int>());
    if(n>1)for(int i =1 ; i < n ; i++)
            {
                arr[i] += arr[i-1];
            }
    //5 4 3 2 1
    //5 9 12 14 15
//    for(int i = 0 ; i < n ; i++)
//        cout << arr[i] << ' ';
//    cout << '\n';
    for (int j =0; j < m; j++)
        {
            bool flg = false;
            cin >> brr[j];
            if(arr[0] >= brr[j])
                {
                    cout << 0;
                    if(j < m-1)cout << '\n';
                    flg = true;
                }
            if(!flg)for (int i =0; i <n ; i++ )
                    {
                        if(arr[i] >= brr[j])
                            {
                                cout << i+1;
                                if(j < m-1)cout << '\n';
                                flg = true;
                                break;
                            }
                    }
            if(!flg){cout << "NO";if(j < m-1)cout << '\n';}
        }
}
