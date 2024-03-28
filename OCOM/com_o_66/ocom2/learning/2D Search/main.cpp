#include <iostream>
#include <stack>
#include <vector>
#include <string> // Include the string library for string operations

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
int row, col;
int sr, sc; // Start
string dt[N];
bool mark[N][N] = {0};
bool fnd = 0;
//int ways = 0;

// Function to check if the cell is walkable
bool walkable(int x, int y)
{
    if (x >= 0 && y >= 0 && x < row && y < col && !mark[x][y])
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
vector<pair<int,int>> path;
void dfs(int x, int y)
{
    stack<pair<int, int>> s;
    s.push({x, y});
    path.clear();

    while (!s.empty())
        {
            auto [x, y] = s.top();
            s.pop();

            if (walkable(x, y))
                {
                    path.push_back({x, y});
                    if (fnd)
                        {
                            cout << "Found at " << x+1 << "," << y+1 << endl;
                            cout << "Path:" << endl;
                            for (auto p : path)
                                {
                                    cout << p.first+1 << " " << p.second+1 << endl;
                                }
                            fnd = 0;
//                            ways++;
                            return;
//							continue;
                        }
                    mark[x][y] = true;
                    s.push({x + 1, y});
                    s.push({x - 1, y});
                    s.push({x, y + 1});
                    s.push({x, y - 1,});
                }
        }
}


int main()
{
    // Input: number of rows, number of columns, start row, start column
    cin >> row >> col >> sr >> sc;
    sr--;
    sc--; // Adjust start coordinates to 0-based indexing

    // Input the maze
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

    // Perform DFS to find the target and count all the possible routes
    dfs(sr, sc);
//    cout << "Ways: " <<ways;
    return 0;
}
