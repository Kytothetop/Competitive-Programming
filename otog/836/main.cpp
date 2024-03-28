#include <iostream>

using namespace std;
#define mod (long long)(1e9 + 7)
void sol()
{
	long long x;
	cin >> x;
	if(x == 1 or x == 2){cout << "NO\n";return;}
	cout << (x % mod ) - 3 << '\n';
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >>  t;
    while(t--)sol();
}
