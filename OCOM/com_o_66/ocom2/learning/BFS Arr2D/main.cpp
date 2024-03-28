#include <bits/stdc++.h>

using namespace std;

#define N 1005
/*
14 12 13 11

111111111111
100000100001
101110101101
101000001001
101111111101
100000000101
101111910101
101000010101
101110010101
100010010101
111010010101
100010010101
111011010101
111111111111

Path:

 00000 0000
 0   0 0  0
 0 00000 00
 0        0
 00000000 0
 0    9 0 0
 0 0000 0 0
 0   00 0 0
 000 00 0 0
   0 00 0 0
 000 00 0 0
   0  0 0 0



5 8 5 3
00000000
00000009
01111111
00000001
00000001
*/
using pii = pair<int,int>;
int row, col;
int sr, sc; // Start
vector<string> dt(N);
vector<vector<bool>> mark(N,vector<bool>(N,0));
bool fnd = 0;
//int ways = 0;
// Function to check if the cell is walkable
bool walkable(int x, int y)
{
    if (x >= 0 && y >= 0 && x < row && y < col && not mark[x][y])
        {
            switch (dt[x][y])
                {
                case '1':
                    return false; // Wall
                case '0':
                    return true;  // Walkable path
                case '9':
                    fnd = true;
                    return true; // Target found
//			default : return true;
                }
        }
    return false;
}
//stack<pii> path;
queue<tuple<int,int,int>> q;
void bfs(int x, int y, int d = 0 )
{
    q.push(make_tuple(x,y,d));

    while(not q.empty())
        {
//		pii now = q.front().first;
            int xnow = get<0>(q.front());
            int ynow = get<1>(q.front());
            int dist = get<2>(q.front());
            q.pop();
            int tmp1[] = {-1,0,0,1};
            int tmp2[] = {0,1,-1,0};
            for(int i =0; i < 4 ; i++)
				if(walkable(xnow+tmp1[i],ynow+tmp2[i]))
                    {
                    	if(fnd)
						{
							cout << "Found at (" << xnow+tmp1[i]+1 << "," << ynow+tmp2[i]+1 << ").\n Distance: " << dist +1;
//							break;
							return;
						}
                        q.push(make_tuple(xnow+tmp1[i],ynow+tmp2[i],dist+1));
                        mark[xnow+tmp1[i]][ynow+tmp2[i]] = 1;
                    }

//                    if(fnd)break;
//            for(int i = -1; i <= 1 ; i++)for(int j = -1; j <= 1; j++)// Diagonal
//                {
//                    if(walkable(xnow+1,ynow))q.push({xnow+1,ynow});
//                }
        }
}

int main()
{
    // Input: number of rows, number of columns, start row, start column
    cin >> row >> col >> sr >> sc;
    sr--;
    sc--;
    for (int i = 0; i < row; i++)
        {
            cin >> dt[i];
        }

    // Output the non-walls
    cout << "\n\n";
    for (int i = 0; i < row; i++)
        {
            for(auto &c : dt[i])cout << ((c == '1') ? ' ':c);
            cout << '\n';
        }

    // Perform BFS to find the target and count all the possible routes
    bfs(sr, sc);
//    cout << "Ways: " <<ways;
    return 0;
}
