#include <iostream>

using namespace std;

int main()
{
    int n,m;
	cin >> n >> m;
	int arr[n][m] = {0};
	for (int i =1;i<=n ;i++ )
	{
		for (int j =1;j<=m ;j++ )
		{
			cin >> arr[i][j];
		}
	}
}
