#include <bits/stdc++.h>
using namespace std;
// Return by backtracking (Check if invalid i guess idk bruh)
int n, m;
vector<vector<char>> maze;
vector<vector<bool>> visited;
int max_health = -999;

void dfs(int x, int y, int health) {
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y])
        return;

    visited[x][y] = true;

    if (maze[x][y] == 'E') {
        max_health = max(max_health, health);
        visited[x][y] = false;
        return;
    }

    else if (maze[x][y] == '*')
        health++;

    else if (maze[x][y] == 'X')
        health--;

    if (health <= 0) {
        visited[x][y] = false;
        return;
    }

    dfs(x + 1, y, health); // down
    dfs(x - 1, y, health); // up
    dfs(x, y + 1, health); // right
    dfs(x, y - 1, health); // left

    visited[x][y] = false;
}

int main() {
    cin >> n >> m;
    maze.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m, false));

    int start_x, start_y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maze[i][j];
//            if (maze[i][j] == 'S') { // POV: You didn't read the problem properly
                start_x = 0;
                start_y = 0;
//            }
        }
    }

    dfs(start_x, start_y, 3);

    cout << max_health;

    return 0;
}
