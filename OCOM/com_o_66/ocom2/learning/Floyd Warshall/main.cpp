#include <bits/stdc++.h>

using namespace std;
/*
N E
5 6
1 2 5
1 4 9
1 5 1
2 3 2
3 4 7
4 5 2
*/

inline int fact()
{

}
#define inf (1e9+7)
#define each(i,a) for(int i = 1 ; i < a ; i++)
int main()
{
    int n,edge;
    cin >> n >> edge ;
    n++;
    vector<vector<int>> arr(n, vector<int>(n,inf));
    for(int i =0; i < edge ; i++)
        {
            int temp1,temp2,temp3;
            cin >> temp1 >> temp2 >> temp3;
            arr[temp1][temp2] = temp3;
            arr[temp2][temp1] = temp3;
        }

    each(i,n)
    {
        each(j,n)cout<< arr[i][j] << ' ';
        cout << '\n';
    }
    each(i,n)
    {
        each(j,n)
        {
            each(k,n)
            {
            	arr[i][j] = min(arr[i][j] , arr[i][k] + arr[k][j]);
            	if(i == j)arr[i][j] = 0;
            }
        }
    }
        each(i,n)
    {
        each(j,n)cout<< arr[i][j] << ' ';
        cout << '\n';
    }
}
