#include <bits/stdc++.h>

using namespace std;
#define INF (1e15)
long long n,m,q;
vector<vector<pair<long long,long long>>> arr;
vector<long long> disc,low;
vector<bool> visited;
//stack<long long> stk;
//vector<set<long long>> scc;
//vector<vector<bool>> bridge;
set<pair<long long,long long>> bridge;
long long tmm=0;

void tarjan(long long now, long long parent)
{
    low[now] = disc[now] = ++tmm;
    visited[now] = true;
//    long long child =0;
    for(auto &ex : arr[now])
        {
            long long nex = ex.second;
            if(not visited[nex])
                {
//                    ++child;
                    tarjan(nex,now);
                    low[now] = min(low[now],low[nex]);
                    //Articulation Point
//					if ((parent != 0 && low[nex] >= disc[now]) || (parent == 0 && child > 1))
//                ap.insert(now);

                    // Bridge
                    if(low[nex] > disc[now])
                        {
//                            bridge[now][nex] = 1;
//                            bridge[nex][now] = 1;
                            bridge.emplace(now,nex);
                            bridge.emplace(nex,now);
//                            cout << now << ' ' << nex << '\n';
                        }

                }
            else if(nex != parent)
                {
                    low[now] = min(low[now],disc[nex]);
                }
        }
}

using pii = pair<long long,long long>;
void djikstra(long long start, long long target)
{
    vector<long long> dist;
    dist.resize(n,INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0,start});
    dist[start] = 0;
    while(not pq.empty())
        {
            long long now = pq.top().second;
            long long nowdist = pq.top().first;
            pq.pop();

            for(auto &e : arr[now])
                {
                    long long nex = e.second;
                    long long nexdist = e.first + nowdist;
//                    if(bridge[now][nex])continue;
                    if(bridge.find({now,nex}) != bridge.end())continue;

                    if(nexdist < dist[nex])
                        {
                            pq.push({nexdist,nex});
                            dist[nex] = nexdist;
                        }
                }
        }
    if(dist[target] == INF)
        {
            cout << -1 << '\n';
        }
    else
        {
            cout << dist[target] << '\n';
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> q;
    arr.resize(n);
    disc.resize(n);
    visited.resize(n,false);
    low.resize(n,INF);
//    bridge.resize(n,vector<bool> (n,false));


    for(long long i =0, u,v,w; i < m; i++)
        {
            cin >> u >> v >> w;
            arr[u].push_back({w,v});
            arr[v].push_back({w,u});
        }
    tarjan(0,0);
    while(q--)
        {
            long long start,target;
            cin >> start >> target;
            djikstra(start,target);
        }
}
