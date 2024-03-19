#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m;
    cin >> n >> m;
    long long int arr[n], quest;
    for(int i =0; i < n; i++)
        {
            cin >> arr[i];
        }
    sort(arr, arr+n, greater<long long int>());
    if(n>1)for(long long int i =1 ; i < n ; i++)
            {
                arr[i] += arr[i-1];
            }
    //5 4 3 2 1
    //5 9 12 14 15
    //5 0 100
    /*
5 17
3 2 5 4 1
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
    */
//    for(int i = 0 ; i < n ; i++)
//        cout << arr[i] << ' ';
//    cout << '\n';
//            cout << (arr+n) << '\n';
    for (long long int j =0; j < m; j++)
        {
            bool flg = false;
            cin >> quest;
            if(quest == 0)
                {
                    cout << 0;
                    if(j < m-1)cout << '\n';
                    continue;
                }
            auto itr = lower_bound(arr, arr+n,quest);
            if(itr == (arr+n)){cout << "NO";}
            else cout << distance(arr, itr)+1;
//            cout << ' ' << itr << ' ';
            if(j < m-1)cout << '\n';
        }
}
