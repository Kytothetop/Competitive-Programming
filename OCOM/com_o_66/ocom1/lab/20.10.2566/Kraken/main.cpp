#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m, k,mx = INT_MIN;
    cin >> n >> m >> k;
    int arr[n+1][m+1] = {0};
    memset(arr, 0, sizeof arr);
//    memset
    /*
    4 3
    3
    1 0 1
    1 1 0
    0 1 0
    0 0 0
    */
    /*
    5
    3
    */
    for(int i =1; i <= n; i++)
        {
            for(int j =1; j <= m; j++)
                {
                    cin >> arr[i][j];
                    if(arr[i][j] == 1)
                        {
//                            cout << i << ' ' << j << '\n';
                        }
                    arr[i][j] =
                        -arr[i-1][j-1]	+	arr[i-1][j] +
                        arr[i][j-1]		+	arr[i][j];
                }
        }
//        cout << '\n';
//        for(auto &c : arr)
//		{
//			for(auto &e : c)
//			{
//				cout << e << ' ';
//			}
//			cout << '\n';
//		}
    for(int i = k; i <= n; i++)
        {
            for(int j =k; j <= m; j++)
                {
                	int temp = arr[i][j] - arr[i-k][j] - arr[i][j-k] + arr[i-k][j-k];
                    if(temp > mx)mx = temp;
//                    cout << i << ' ' << j << ' ' << temp;
                }
//                cout << '\n';
        }
//        cout << '\n';
        cout << mx;
}
