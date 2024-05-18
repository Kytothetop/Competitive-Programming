#include <bits/stdc++.h>

using namespace std;

using ll = unsigned long long ;
ll n;
#define INF (2e18)
#define bigM (2e9)
struct kingdom
{
    ll e,w,a,f; /// Earth Water Air Fire
    friend kingdom operator + (const kingdom& lhs, const kingdom& rhs)
    {
        return kingdom
        {
            lhs.e + rhs.e,
            lhs.w + rhs.w,
            lhs.a + rhs.a,
            lhs.f + rhs.f,
        };
    }
    friend kingdom operator - (const kingdom& lhs, const kingdom& rhs)
    {
        return kingdom
        {
            lhs.e - rhs.e,
            lhs.w - rhs.w,
            lhs.a - rhs.a,
            lhs.f - rhs.f,
        };
    }
    ll val() const
    {

		ll temp1=a,temp2=e,temp3=w,temp4=f;
    	if(temp1 < temp2)swap(temp2,temp1);
    	if(temp4 > temp3)swap(temp3,temp4);
        return (temp1 - temp2)* (temp1 - temp2) + (temp3 - temp4)* (temp3 - temp4);
    }
    bool check() const
    {
    	ll temp1=a,temp2=e,temp3=w,temp4=f;
    	if(temp1 < temp2)swap(temp2,temp1);
    	if(temp4 > temp3)swap(temp3,temp4);

        return (((temp1 - temp2) > bigM) || ((temp3 - temp4) > bigM));
    }
    bool operator<(const kingdom& other) const
    {
        return val() < other.val();
    }
};
vector<kingdom> arr;

bool visited[100005] = {false};
kingdom memo[100005] = {0,0,0,0};




//kingdom solve(ll l)
//{
////    if(l > n)return {0,0,0,0};
////    if(visited[l])return memo[l];
////    visited[l]=1;
//
//    kingdom now = arr[l];
//    kingdom mn = now;
//    for(ll i = 1; i <= n; i++)
//        {
//        	kingdom temp = arr[i];
//            for(ll j = i+1; j <= n; j++)
//                {
//                	mn = min(mn,temp);
//                	temp = temp + arr[j];
//                }
//			mn = min(mn,temp);
//        }
//	return mn;
////    for(ll i = l ; i <= n; i++)
////        {
////            kingdom nex = solve(i+1);
////            now = now + nex;
////            mn = min(mn,now);
////            mn = min(min(mn,now),solve(i+1));
////            mn = min(mn,now + solve(i+1));
////        }
////    return memo[l] = mn;
//}

vector<kingdom> prefixSum;
kingdom solve()
{

    kingdom mn = arr[1];
    kingdom temp;

    for (ll i = 1; i <= n; ++i)
        {
            for (ll j = i; j <= n; ++j)
                {
                    temp = prefixSum[j] - prefixSum[i - 1];
                    if(temp.check())
						continue;
                    mn = min(mn, temp);
                }
        }

    return mn;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    arr.resize(n+1);
//    ll arr[n+1],brr[n+1],crr[n+1],drr[n+1];
    prefixSum.resize(n+1);
    prefixSum[0] = {0, 0, 0, 0};
    for(ll i =1; i <= n ; i++)
        {
            cin >> arr[i].e;
            prefixSum[i].e = prefixSum[i - 1].e + arr[i].e;
        }
    for(ll i =1; i <= n ; i++)
        {
            cin >> arr[i].w;
            prefixSum[i].w = prefixSum[i - 1].w + arr[i].w;
        }
    for(ll i =1; i <= n ; i++)
        {
            cin >> arr[i].a;
            prefixSum[i].a = prefixSum[i - 1].a + arr[i].a;
        }

    for(ll i =1; i <= n ; i++)
        {
            cin >> arr[i].f;
            prefixSum[i].f = prefixSum[i - 1].f + arr[i].f;
        }
//    cout << "val:\n";
//    for(ll i =1; i <= n ; i++)
//        {
//            cout << arr[i].val() << ' ';
//        }
//    cout << '\n';
    cout << solve().val();
    //	cout << 0;
}
