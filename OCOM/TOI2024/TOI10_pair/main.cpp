#include <iostream>
#include <vector>

using namespace std;
/*
13
N U B O B U O N B O N U O
*/
int main()
{
    int n;
    cin >> n;
    vector<char> x(n);
//    vector<char> y(n);
    vector<vector<int>> arr(n, vector<int>(n, 0));


    for(int i =0; i <n ; i++)
        {
            cin >> x[i];
            if (i > 0 && x[i-1] == x[i]) arr[i-1][i] = 1;
//            y[n-i-1] = x[i];
        }


    for(int i =2; i <= m ; i++)
        {
            for(int l =0; l+i-1 <= n ; l++)
                {
//                    if(i == 0 || j == 0)
//                        {
//                            arr[i][j] = 0;
//                        }
					int r = l + i - 1;
					if(x[l] == x[r])
						arr[l][r] = arr[l+1][r-1]+2;
					else
					{
						for(int k = l; k < r ; k++) arr[l][r] = max(arr[l][r],arr[l][k] + arr[k+1][r]);
//						arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
					}
                }
        }
//	for(int i =0; i  <=m ; i++)
//	{
//		for(int  j=0; j <= m ; j++)
//		{
//			cout << arr[i][j] << ' ';
//		}
//		cout << '\n';
//	}
	cout << arr[0][n-1];


    return 0;
}
