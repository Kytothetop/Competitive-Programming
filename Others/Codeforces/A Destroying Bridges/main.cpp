#include <iostream>

using namespace std;

void sol()
{

    int n,k;
    cin >> n >> k;
////    int total = n*(n-1)/2;
    int m = n-1;
    if(k >= m)
    cout << 1 << '\n';
    else
		cout << n << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        {
            sol();
        }
}
