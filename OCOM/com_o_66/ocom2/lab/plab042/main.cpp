#include <iostream>
#include <vector>

using namespace std;
/*
8 11 0 5
0 1 10
0 2 10
1 3 10
1 5 70
2 3 10
2 4 30
2 6 10
3 5 30
4 5 20
6 7 15
7 5 20

*/
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int n,edge, start, target;
    cin >> n >> edge >> start >> target;
#define inf (1e9)
    vector<vector<int>> arr(n,vector<int>(n,inf));
    for(int i =0; i < edge ; i++)
        {
            int temp1,temp2,temp3;
            cin >> temp1>>temp2>>temp3;
            arr[temp1][temp2] = temp3;
            arr[temp2][temp1] = temp3;
        }


    int mn = INT_MAX;
    for(int k =0; k < n ; k++)
        {
            for(int i =0; i < n ; i++)
                {
                    for(int j =0; j < n ; j++)
                        {
                            if(arr[i][j] > arr[i][k] + arr[k][j] and arr[i][k] != inf and arr[k][j] != inf )
							{
								arr[i][j] = arr[i][k] + arr[k][j];
								if(i == j)arr[i][j] = 0;
							}
						}
                }
        }
	cout << arr[start][target] << '\n' << arr[start][target]*20;
}
