#include <bits/stdc++.h>

using namespace std;
int n,m;
int arr[16][16];
int recur(int x =0, int y=0, int sum =0)
{
//	if(x == 0 and y == 0)sum = arr[0][0];
    if(x == n-1 and y == m-1)
        {
            return sum + arr[x][y];
        }

    int temp1 = INT_MIN,temp2 = INT_MIN;
    if((x < n-1) or (y < m-1))
        {
            if(x < n-1)
                {
                    temp1 = (recur(x+1,y,sum + arr[x][y]));
                }
            if(y < m-1)
                {
                    temp2 = (recur(x,y+1,sum + arr[x][y]));
                }

            return max(temp1, temp2);
        }
}
int main()
{
    cin >> n >> m;
    for( int i =0 ; i < n ; i++)
        {
            for(int j =0 ; j < m ; j++)
                {
                    cin >> arr[i][j];
                }
        }
    cout << recur(0,0,0);
}
