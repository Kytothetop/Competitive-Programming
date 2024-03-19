#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    cin >> n >> m >> q;
    int arr[n][m];
    int x[m] = {0};
    int y[n] = {0};
    for (int i =0; i<n ; i++ )
        {
            for (int j=0; j<m ; j++ )
                {
                    cin >> arr[i][j];
                    x[j] += arr[i][j];
                    y[i] += arr[i][j];
                }
        }
    while(q--)
        {
            int r,c;
            cin >> r >> c;
            cout << x[c-1] + y[r-1] -arr[r-1][c-1];
            if(q > 0)cout << '\n';
        }

}
/*
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m,q;
    cin >> n >> m >> q;
	int arr[n][m];
	for (int i =0;i<n ;i++ )
	{
		for (int j=0;j<m ;j++ )
		{
			cin >> arr[i][j];
		}
	}
	while(q--){
		int r,c;
		cin >> r >> c;
		int total = -arr[r-1][c-1];
		for (int j=0;j<m ;j++ )
		{
			total += arr[r-1][j];
		}
		for (int i =0;i<n ;i++ )
		{
			total += arr[i][c-1];
		}

	cout << total;
	if(q > 0)cout << '\n';
	}

}
*/
