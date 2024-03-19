#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 1005;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int n, x[MAXN][MAXN], dist[MAXN][MAXN];

void bfs(int k) {
    memset(dist, -1, sizeof(dist));
    queue<pair<int, int>> q;
    q.push({1, 1});
    dist[1][1] = 0;
    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nr = r + dx[i];
            int nc = c + dy[i];
            if (nr < 1 || nr > n || nc < 1 || nc > n) continue;
            if (dist[nr][nc] != -1) continue;
            int max_temp = max(x[r][c], x[nr][nc]);
            if (max_temp > k) continue;
            dist[nr][nc] = dist[r][c] + 1;
            q.push({nr, nc});
        }
    }
}

int main() {
    cin >> n;
    int lo = 0, hi = 1e7;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x[i][j];
            if (x[i][j] == 0) lo = max(lo, 1);
        }
    }
    bfs(lo);
    if (dist[n][n] != -1) {
        cout << lo << endl;
        return 0;
    }
    while (lo + 1 < hi) {
        int mid = (lo + hi) / 2;
        bfs(mid);
        if (dist[n][n] != -1) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
    cout << hi << endl;
    return 0;
}
