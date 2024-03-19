#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
typedef long double db;
void sol()
{
    lli a, b, m;
    cin >> a >> b >> m;
//    cout << fixed;
    m++;
//    long long int g = (a/(__gcd(a,b))) * b;

//	vector<lli> x,y;
//	lli temp = ceil((double)m/a);
	cout << (lli)(ceil((db)m/a) + ceil((db)m/b)) << '\n';



}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
//    cout << '\n';
    while(t--)
        {
            sol();
        }
}
