#include <bits/stdc++.h>

/*
5 7 5 3
10
2
1
4
3
2 5
3 1
3 5
1 2
4 1
4 2
5 4
1
2
3
4
5
*/
using namespace std;
using ll = long long;
using pii = pair<ll,ll>;
vector<ll> energy;
vector<bool> visited;
vector<ll> dist;
vector<ll> bb;
vector<set<ll>> range;
vector<vector<pii>> edge;
#define inf 1e12
ll n,k,q,start;
void djik()
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0,start});

    while(not pq.empty())
        {
            ll now = pq.top().second;
            pq.pop();
            if(visited[now])continue;
            visited[now]=true;
            for(auto &next : edge[now])
                {
                    ll node = next.second;
                    ll weight = next.first;
                    if(dist[node] > dist[now] + weight)
                        {
                            dist[node] = dist[now] + weight;
                            bb[node] = bb[now] + 1;
                            pq.push({dist[node],node});
                        }
                }
        }
//    for(ll nod =1; nod <= n; nod++)
//        {
//            range[bb[nod]].insert(dist[nod]);
//        }
    return;
}
ll sol(ll num)
{
//	cout << num << ": ";
//	for(auto &e : range[num])
//	{
//		cout << e << ' ';
//	}
//    return *(range[num].begin());
	return dist[num];
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k >> q >> start;

    dist.resize(n+1,inf);
    dist[start] = 0;
    energy.resize(n+1,inf);
    edge.resize(n+1);
    visited.resize(n+1,false);
    range.resize(n+1);
    bb.resize(n+1,n+5);
    bb[start] = 0;



    for(ll i =1; i <= n ; i++)
        {
            cin >> energy[i];
        }
    for(ll i =0; i < k ; i++)
        {
            ll temp1, temp2;
            cin >> temp1 >> temp2;
            edge[temp1].push_back({energy[temp2],temp2});
        }
    djik();
    while(q--)
        {
            ll quest;
            cin >> quest;

            cout << sol(quest) + energy[start] << '\n';
        }

}
