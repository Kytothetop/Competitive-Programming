#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf (2e9+5)
int n;
void inss(vector<ll>& arr,ll val)
{
    auto it = arr.emplace(lower_bound(arr.begin(),arr.end(), val), val);
    for(auto &e : arr)
        {
            cout << e << ' ';
        }
    cout << '\n';
}
pair<ll,pair<int,int>> check(vector<ll>& arr, int l =0, int r = n-1)
{
//    if(l == r)return {inf,{l,r}};
//    ll p1 = inf,p2 = inf;
//    if(l < n-1)p1 = check(arr,l+1,r).first;
//    if(r > 1)p2 = check(arr,l,r-1).first;
//    if(p1 > p2)
//        {
//            p1 = p2;
//        }
//	return {(min(abs(arr[r] - arr[l]), min( p1 , p2 ))),{l,r}};
}
int main()
{
    cin >> n;
    vector<ll> origin(n),arr;
//    vector<ll> arr(n,inf);
    for(int i =0; i < n ; i++)
        {
            cin >> origin[i];
        }
    int s1,s2;
    cin >> s1;
    inss(arr,origin[s1-1]);

//	arr[s1-1] = origin[s1-1];
    int times = (n-1)/2;
    for(int tm = 0; tm < times ; tm++)
        {
            cin >> s1 >> s2;
            inss(arr,origin[s1-1]);
            inss(arr,origin[s2-1]);
            pair<ll,pair<int,int>> cc = check(arr);
            cout << "\n: " << cc.first << ' ' << cc.second.first << ' ' << cc.second.second << '\n';
//		arr[s1-1] = origin[s1-1];
        }
}
