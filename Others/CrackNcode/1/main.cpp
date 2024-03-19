#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	n =  2*n-1;

	//3 5x5
	//4 7x7
	for (int i =0;i <n ;i++ )
	{
		for (int j=0;j<n ;j++ )
		{
			if(i == j || j == 0 || j == n-1)
				cout << '#';
			else cout << ' ';
		}
		cout << '\n';
	}
    return 0;
}
