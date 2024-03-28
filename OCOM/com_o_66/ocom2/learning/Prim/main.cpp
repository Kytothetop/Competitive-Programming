//#include <bits/stdc++.h>
//
//using namespace std;
///*
//Input:
//6 9
//0 1 8
//1 2 6
//0 3 6
//3 1 6
//3 4 8
//1 4 7
//4 5 5
//1 5 9
//2 5 5
//
//
////Output:
//28
//2800
//
//*/
//
//#define inf (1e9+7)
//	using pii = pair<int,int>;
//int main()
//{
//    int n,edge;
//    cin >> n >> edge ;
////    vector<int> arr[n];
////    vector<vector<int>> arr(n, vector<int>(n,inf));
//    vector<vector<pii>> arr(n);
//    vector<int> parent(n);
//    vector<int> d(n,inf);
//    vector<bool> inMST(n,false);
//    int start = 1;
//    for(int i =1 ; i <= n; i++)parent[i] = i;
//
//    for(int i =0; i < edge ; i++)
//        {
//            int temp1,temp2,temp3;
//            cin >> temp1 >> temp2 >> temp3;
////            arr[temp1][temp2] = temp3;
////            arr[temp2][temp1] = temp3;
//            arr[temp1].push_back({temp3,temp2});
//            arr[temp2].push_back({temp3,temp1});
//        }
////    for(int i =1 ; i <= n; i++)
////        {
////            for(int j =1 ; j <= n; j++)
////                {
////
////                }
////        }
//
//	priority_queue<pii,vector<pii>, greater<pii>> pq;
//	pq.push({0,start});
//
//	while(not pq.empty())
//	{
//		auto u = pq.top();
//		pq.pop();
//		for(auto v : arr[u.second])
//		{
//
//		}
//	}
//
//
//}








 //Kruskal Ezezezekzodjwjdjzdlkwjakldjkwlajkdlwa
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
