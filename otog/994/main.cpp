/*
7 4 3
1 1 4 1 2 3 1
1 1 2 3
output: 3
12 5 3
9 9 2 2 10 9 7 6 3 6 3 1
6 9 7 8 10
output: 4
*/
/// Sliding window
#include <bits/stdc++.h>
int n,m,k,sum =0,cnt=0,mp[1000000] = {0};
int main()
{
    std::cin >> n >> m >> k;
    int arr[n];
    while(n--)std::cin >> arr[sizeof(arr)/sizeof(int) - n-1];
    for(int i =0; i < m ; i++)std::cin >> n,mp[n]++;
    for(int i=0; i < sizeof(arr)/sizeof(int); i++)sum += (--mp[arr[i]] >= 0) - (i >= m and mp[arr[i-m]]++ >=0), cnt += (i >= m - 1 and sum >= k);
    std::cout << cnt;
}
/*
#include <bits/stdc++.h>

using namespace std;
/// Sliding window
using ll = int;

int main()
{
    ll n,m,k;
    cin >> n >> m >> k;
    ll arr[n];
//    set<ll> want;

    map<int,int> mp;
    for(int i =0; i < n ; i++)
        {
            cin >> arr[i];
        }
    for(int i =0; i < m ; i++)
        {
            int temp;
            cin >> temp;
//            want.emplace(temp);
            mp[temp]++;
        }
    int sum =0,cnt=0;

    for(int i=0; i < n; i++)
        {
//            if(want.find(arr[i]) != want.end() and mp.count(arr[i]))
//            if(mp[arr[i]] >= 0)
//                {
////            mp[arr[i]]--;
            if(--mp[arr[i]] >= 0)sum++;
//                }
            if (i == m - 1)
                {
                    if(sum >= k)
                        cnt++;
                }
            if(i >= m)
                {
                    if(mp[arr[i-m]]++ >=0)sum--;
//                    mp[arr[i-m]]++;
                    if(sum >= k)
                        cnt++;
                }
        }
    cout << cnt;
}

*/
