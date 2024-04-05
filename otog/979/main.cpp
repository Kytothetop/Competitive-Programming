#include <bits/stdc++.h>

using namespace std;
using ll = long double;
using pii = pair<ll,ll>;
struct ss
{
    ll a=0.0,b=0.0,c=0.0;
};
vector<ss> arr;
int n,k;
ll sum =0;
// Use Binary Search

int cal(ll x)
{
    ll sn = sum*x;
    for(auto &e : arr)
        {
            sn += pow(x,e.b) + pow(x,e.c);
        }
//	if(sn == k)return 0;
//	if(sn < k)return -1;
//	if(sn > k)return 1;
//	cout << sn << "::";
    if(fabs(sn - k) < 1e-9) return 0;  // Check for equality with epsilon
    else if(sn < k) return -1;
    else return 1;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    arr.resize(n);

    cout << fixed << setprecision(9);

    for(int i =0 ; i < n ; i++)
        {
            cin >> arr[i].a>> arr[i].b>> arr[i].c;
            sum += arr[i].a;
        }
    ll L = 0.0, R = 100.0;
    ll mid = L + (R-L)/2;
	while(abs(R - L) > 1e-7)
//    while(L < R)
//	while(true)
        {
            mid = L + (R-L)/2;
//            cout << L << ' ' << mid << ' ' << R << '\n';
            auto temp = cal(mid);
            if(temp == -1)
                {
			L = mid + 0.00001;
//                    L = mid+0.01;
                }
            else if(temp == 1)
                {
			R = mid;
//                    R = mid-0.01;
                }
            else if(temp == 0)
                {
                    break;
                }
        }
    cout << fixed << setprecision(2);
    cout << (ceil(mid*10000))/100;
}
