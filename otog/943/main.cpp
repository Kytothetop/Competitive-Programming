#include <bits/stdc++.h>

using namespace std;
/*
6 5 3 1 4

(grid)
3 2 1 2 3
1 5 2 4 5
8 7 5 5 4
1 2 6 1 4
7 9 5 1 3
4 5 8 7 9

(bomb)
0 0
3 2
3 4

(ask)
0 0
5 4
3 3
2 2
*/

/*
6 5 3 1 4

5 13 1 2 3
17 5 2 4 5
8 7 5 5 4
1 2 6 1 4
7 9 5 1 3
4 5 8 7 9

0 0
0 0
0 0

0 0
1 0
0 1
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,b,k,q;
    cin >> n >> m >> b >> k >> q;



    int arr[n][m];


    vector<pair<int,int>> bomb;

    for (int i =0; i<n ; i++ )
        {
            for (int j=0 ; j<m; j++ )
                {
                    cin >> arr[i][j];
                }
        }
    for (int i =0; i<b ; i++ )
        {
        	int abc,bce;
            cin >> abc >> bce;
            bomb.push_back(make_pair(abc,bce));
        }
    for (int i =0; i < q; i++ )
        {
        	int x,y;
            cin >> x >> y;
            int ans = arr[x][y];
            for(auto &e : bomb)
                {
                    if(abs((e.first)-x) + abs((e.second)-y) <= k)
                        {
                            ans--;
                        }
                }
            if(ans <= 0)cout << 0;
            else
                cout << ans;
            if(i<q-1)cout << '\n';

        }

    return 0;
}
