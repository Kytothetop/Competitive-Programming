#include <iostream>
#include <cstring>

using namespace std;
/*
8 7 5
5 1
5 3
5 4
4 0
3 2
3 6
2 7
*/
// 5 -> 1 -> 3 -> 2 -> 7 -> 6 -> 4 -> 0 ->
/*
  5
 /|\
4 3 1
| |\
0 2 6
  |
  7

*/
#define N 1005
int adj[N][N];
int n = 11, edges = 10, target = 1;

pair<int,int> dfs(int s,int dist =0) {
    if(s == target){
        cout << s;
        return {s,dist};
    }
        cout << s << " -> ";
    for (int i = 0; i < n; i++) {
        if (adj[s][i] > 0) {
            auto result = dfs(i,dist+1);
            if (result.first != -1)
                return result;
        }
    }
    return {-1,-1};
}

int main() {
    int start = 0;
    cin >> n >> edges >> start;
    memset(adj, 0, N * N * sizeof(int));
    for (int i = 0; i < edges; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        adj[temp1][temp2] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << ' ';
        }
        cout << '\n';
    }
    auto tmp = dfs(start);
    if(tmp.first != -1)cout << ("\nFound: ") << tmp.first << " at " << tmp.second;
		else
		cout << ("\nDidn't find ");
    return 0;
}
