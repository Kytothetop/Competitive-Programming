#include <iostream>

using namespace std;

int main()
{
    int p,n,cnt =0;
    cin >> p >> n;
	while(n--)
	{
		int k;cin >> k;
		if(k >= p) cnt++;
	}
	cout << cnt;
}
