#include <bits/stdc++.h>
using namespace std;

int n, edge, start, target;
int total_ways, minimum_weight = INT_MAX; // Initialize minimum_weight with maximum possible value
map<int, set<pair<int, int>>> arr;
vector<bool> visited;

void dfs(int node, int weight) {
    if (node == target) {
        total_ways++; // Increment total_ways when reaching the target
        minimum_weight = min(minimum_weight, weight); // Update minimum_weight if current weight is less
        return;
    }
    visited[node] = true;
    for (auto neighbor : arr[node]) {
        int next_node = neighbor.first;
        int next_weight = neighbor.second;
        if (!visited[next_node]) {
            dfs(next_node, weight + next_weight); // Recursively call dfs for unvisited neighbors
        }
    }
    visited[node] = false; // Reset visited status for backtracking
}

int main() {
    cin >> n >> edge >> start >> target;
    visited.resize(n, false); // Initialize visited array

    for (int i = 0; i < edge; i++) {
        int temp_node1, temp_node2, temp_weight;
        cin >> temp_node1 >> temp_node2 >> temp_weight;
        arr[temp_node1].insert({temp_node2, temp_weight});
        arr[temp_node2].insert({temp_node1, temp_weight});
    }

    dfs(start, 0); // Call DFS from start node with weight 0

    cout << total_ways << ' ' << minimum_weight;
    return 0;
}
