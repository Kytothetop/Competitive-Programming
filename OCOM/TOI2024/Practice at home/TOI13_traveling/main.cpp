#include <bits/stdc++.h>

/*
Keep 2 dist
-From start to every node
-From end to every node
iterate the first dist array -> if greater than cost then look up the same node in the second array
*/

using namespace std;
using ll = long long;
using pii = pair<int,int>;
int main()
{
	#define INF (1e13+5)
	int n,m;
	cin >> n >> m;
	int start,en;
	ll z;
	cin >> start >> en >> z;
	priority_queue<pii,vector<pii>,greater<pii>> pq;
	vector<vector<pair<int,int>>> arr(n);
	vector<bool> visited(n,false);

	vector<int> dist(n,INF),dist(n,INF);

	for(int i =0; i < m; i++)
	{
		int u,v,d;
		cin >> u >> v >> d;
		arr[u].push_back({w,v});
		arr[v].push_back({w,u});
	}
	pq.push({d,start});
	while(not pq.empty())
	{
		int now = pq.top().second;
		int nowdist = pq.top().first;
		pq.pop();
		if(visited[now])continue;
//		if()
		visited[now] = true;
		for(auto &e : arr[now])
		{
			int next = e.second;
			int nextdist = e.first;
			pq.push({nowdist + nextdist, next});
		}
	}

}
