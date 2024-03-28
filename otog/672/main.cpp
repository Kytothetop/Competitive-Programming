#include <bits/stdc++.h>

using namespace std;

int n;
using ll = long long;
//vector<int> arr;
vector<ll> fact;
ll factorial(ll n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else if(fact[n] != 0)
    {
        return fact[n];
    }
    else {
        return fact[n] = n * factorial(n - 1);
    }
}
void sol(vector<int> &ff)
{
    int sum =1;
//    set<int> crr;

    // ในหลักที่ n เปลี่ยน ทุกๆ (n-1)! ตัว

//  1   // 1 2 3 4 5
//  64  // 3 4 2 5 1
//    for(int i =0; i < n; i++)
//    {
//        crr.insert((i+1));
//    }
    for(int i = 0 ; i < n ; i++)
    {
        int temp =0;
        for(int j = i ; j < n ; j++)
        {
            if(ff[i] > ff[j])
            {
                temp++;
            }
//        cout << temp << ' ';
        }
//        crr.push(ff[i]);


//        int temp = distance(crr.begin(),find(crr.begin(),crr.end(), ff[i]));
//        if(not crr.empty())crr.erase(ff[i]);


//        cout << temp << ' ';
        sum += temp*(factorial(n-i-1));
//        if(not crr.count(ff[i]))
//        {
//
//        }
    }
        cout << sum << '\n';
	// 2,1 1
	// 3,2 2
	// 4,3 6

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int k;
    cin >> n >> k;
//    arr.resize(n);
    fact.resize(n+2);
//    for(int i =0; i < n ; i++)
//        {
//            arr[i] = i+1;
//        }
    while(k--)
        {
            vector<int> ff(n);
            for(int i =0; i < n ; i++)
                cin >> ff[i];
            sol(ff);
        }

}
