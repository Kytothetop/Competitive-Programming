//#include <bits/stdc++.h>
//
//using namespace std;
///*
//8 8 4
//0 2 0
//2 1 2
//4 5 0
//4 3 3
//2 3 3
//3 4 1
//2 5 3
//6 7 5
//0 4
//4 1
//6 7
//5 7
//*/
//int main()
//{
//    using ll = long long;
//    cin.tie(0);
//    ios_base::sync_with_stdio(0);
//    int n,m,qnum;
//    cin >> n >> m >> qnum;
//    vector<vector<pair<ll,ll>>> adj(n);
//    vector<ll> parent(n);
//    vector<long long> powerinNode (n);
//
//
//    for(int i =0; i < n ; i++)
//        {
//            parent[i] = i;
//        }
////    long long state =0;
//    for(int i=0,u,v,a; i < m ; i++)
//        {
//            cin >> u >> v >> a;
//            adj[u].push_back({a,v});
//            adj[v].push_back({a,u});
//        }
//
//
//    while(qnum--)
//        {
//            vector<bool> visited(n,false);
//            long long state =0;
//            ll start,target;
//            cin >> start >> target;
//            if(parent[start] == parent[target] and start != target)
//                {
//                    cout << powerinNode[parent[start]] << '\n';
//                    continue;
//                }
//            queue<ll> q;
//            q.push(start);
//
//            while (not q.empty())
//                {
//                    ll now = q.front();
//                    q.pop();
//                    if(visited[now])continue;
//                    visited[now] = true;
//                    parent[now] = start;
//
//                    for(auto &e : adj[now])
//                        {
//                            ll nex = e.second;
//                            ll nexstat = e.first;
//                            if(not visited[nex] or not(state & (1LL << nexstat)))q.push(nex); ///If not visited or power hasn't been found
////					cout << "From " << now << " to " << nex << " using " << nexstat << '\n';
//                            state |= (1LL << nexstat);
//                        }
//                }
//
//            if(parent[target] != parent[start])
//                {
//                    cout << -1 << '\n';
//                    long long state2 =0;
//                    q.push(target);
//
//                    while (not q.empty())
//                        {
//                            ll now = q.front();
//                            q.pop();
//                            if(visited[now])continue;
//                            visited[now] = true;
//                            parent[now] = target;
//
//                            for(auto &e : adj[now])
//                                {
//                                    ll nex = e.second;
//                                    ll nexstat = e.first;
//                                    if(not visited[nex] or not(state2 & (1LL << nexstat)))q.push(nex); ///If not visited or power hasn't been found
////					cout << "From " << now << " to " << nex << " using " << nexstat << '\n';
//                                    state2 |= (1LL << nexstat);
//                                }
//                        }
//
//                    powerinNode[target] = state2;
//                    continue;
//                }
//            powerinNode[start] = state;
//            cout << state << '\n';
//
//        }
//}

#include <bits/stdc++.h>

using namespace std;

int main()
{
	using ll = long long;
	cin.tie(0); ios_base::sync_with_stdio(0);
    int n,m,qnum;
    cin >> n >> m >> qnum;
    vector<vector<pair<ll,ll>>> adj(n);
    vector<ll> parent(n);
    vector<long long> powerinNode (n);


	for(int i =0; i < n ; i++)
	{
		parent[i] = i;
	}
//    long long state =0;
    for(int i=0,u,v,a; i < m ; i++)
        {
            cin >> u >> v >> a;
            adj[u].push_back({a,v});
            adj[v].push_back({a,u});
        }


    while(qnum--)
        {
        	vector<bool> visited(n,false);
        	long long state =0;
            ll start,target;
            cin >> start >> target;
//            if(parent[start] == parent[target] and start != target)
//			{
//				cout << powerinNode[parent[start]] << '\n';
//				continue;
//			}
            queue<ll> q;
            q.push(start);

            while (not q.empty())
			{
				ll now = q.front();
				q.pop();
				if(visited[now])continue;
				visited[now] = true;
				parent[now] = start;

				for(auto &e : adj[now])
				{
					ll nex = e.second;
					ll nexstat = e.first;
					if(not visited[nex] or not(state & (1LL << nexstat)))q.push(nex); ///If not visited or power hasn't been found
//					cout << "From " << now << " to " << nex << " using " << nexstat << '\n';
					state |= (1LL << nexstat);
				}

			}

			if(parent[target] != parent[start])
			{
				cout << -1 << '\n';
				continue;
			}
//			for(int i =0; i < n ; i++)if(visited[i])powerinNode[i] = state;
			powerinNode[start] = state;
			cout << state << '\n';

        }
}
