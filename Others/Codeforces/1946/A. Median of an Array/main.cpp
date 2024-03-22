#include <bits/stdc++.h>

using namespace std;
void sol()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i < n ; i++)
        {
            cin >> arr[i];
        }
    if(n == 1)
        {
            cout << 1 << '\n';
            return;
        }
    sort(arr.begin(), arr.end());
    int med = (n-1)/2;
    int ori = arr[med];
    int cnt = 0;
    auto ss = equal_range(arr.begin(),arr.end(), ori);
    auto lw = ss.first;
    auto up = ss.second;
//    auto toto = ss.second+1;
    bool flg = 0;
//    if(lw== arr.end())
//        {
//            lw = arr.begin();
//        }
    if(up == arr.end())
        {
            up = arr.end()-1;
//            flg = 1;
        }
    else flg = 1;
    int scnt = up - arr.begin() - med;
    int scnt2 = up - arr.begin();
//    if(arr[med] == arr[med-1]){cout << 1 << '\n' ; return;}
    if(arr[med] != arr[n-1])
        {
            if(flg)
                {
//            cout << ((*up) - (ori)) << ' ' << scnt << ' ' << scnt2 << ' ';
                    cout << scnt;
//            cout << ((*up) - (ori))*scnt << '\n';
                }
            else
                {
                    cout << scnt;
//            cout << ((ori)) << ' ' << scnt << ' ' << scnt2 << ' ';
//            cout << ((ori))*scnt << '\n';
                }
            cout << '\n';
            return;
        }
    for(int i = med ; i < n-1 ; i++)
        {
            if(arr[i] == arr[i+1])
                {
                    cnt++;
                }
        }
    if(arr[med] == arr[n-1])
        {
            cnt++;
        }
    cout << cnt;
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        {
            sol();
        }
}
