#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
//    priority_queue<pair<int,pair<int,int>>> edge;
	vector<priority_queue<pair<int,int>>> adj(n);
    vector<int> visited(n);
    int start,en;
	for(int i =0; i < m; i++)
	{
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push({w,v});
		adj[v].push({w,u});
//		edge.push_back({w,{u,v}});
//		edge.push_back({w,{v,u}});
	}
//	sort(edge.begin(),edge.end(),greater<pair<int,pair<int,int>>>);
	cin >> start >> en;
	q.push()
}
