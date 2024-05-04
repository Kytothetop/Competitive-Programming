#include <iostream>

using namespace std;
vector<vector<int>> arr(n+k+10,vector<int>(m+k+10,0));
vector<vector<int>> brr(n+k+10,vector<int>(m+k+10,0));
vector<vector<int>> crr(n+k+10,vector<int>(m+k+10,0));
vector<vector<int>> normal(n+k+10,vector<int>(m+k+10,0));

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    for(int i =1; i <= n; i++)
        {
            for(int j =1; j <= m; j++)
                {
                    cin >> arr[i][j];
                    brr[i][j] = arr[i][j];
                    crr[i][j] = arr[i][j];
                    normal[i][j] = arr[i][j];
                    brr[i][j] += brr[i-1][j-1];
//                    brr[i][j] += brr[i][j-1];
//                    brr[i][j] += brr[i-1][j+1];
//                    brr[i][j] += brr[i][j+1];

//                    for(int a = 0 ; a < k ; a++)
//					{
//
//					}
				}
        }
}
