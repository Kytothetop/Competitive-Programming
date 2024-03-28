//Kruskal
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
vector<int> parent(N), sz(N, 1);

struct Edge {
	int u, v, w;
};

bool cmp(const Edge &l, const Edge &r) {
	return l.w < r.w;
}

int findSet(int u) {
	if(parent[u] == u) return u;
	return parent[u] = findSet(parent[u]);
}

void unionSet(int u, int v) {
	int U = findSet(u), V = findSet(v);
	if(U == V) return;
	if(sz[U] >= sz[V]) {
		parent[V] = U;
		sz[U] += sz[V];
		sz[V] = 0;
	} else {
		parent[U] = V;
		sz[V] += sz[U];
		sz[U] = 0;
	}
}

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	for(int i=0;i<N;i++) parent[i] = i;
	int n, m; cin >> n >> m;
	vector<Edge> edge;
	for(int i=0;i<m;i++) {
		int u, v, w; cin >> u >> v >> w;
		edge.push_back({u, v, w});
	}

	sort(edge.begin(), edge.end(), cmp);

	int ans = 0;
	for(int i=0;i<m;i++) {
		if(findSet(edge[i].u) != findSet(edge[i].v)) {
			ans += edge[i].w;
			      unionSet(edge[i].u, edge[i].v);
		}
	}

	cout << ans << '\n';
	cout << ans * 100;
	return 0;
}
