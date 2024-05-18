#include <bits/stdc++.h>

using namespace std;


int main()
{
#define INF INT_MAX
cin.tie(nullptr)->sync_with_stdio(false);

    using pii = pair<int,int>;
    using ppi = pair<pii,int>;
    int n,k,p,start;
    int m;
    cin >> n >> m >> p >> k;



    vector<vector<pair<int,int>>> arr(n+1);
    vector<bool> house(n+1); // Houses with goodies
    vector<vector<int>> dist(n+1,vector<int>(k+1,INF));
    vector<vector<bool>> visited(n+1,vector<bool>(k+1));
    priority_queue<ppi,vector<ppi>,greater<ppi>> pq;

    for(int i =0,u,v,w; i < m ; i++)
        {
            cin >> u >> v >> w;
            arr[u].emplace_back(w,v);
            arr[v].emplace_back(w,u);
        }
    for(int i =0; i < p; i++)
        {
            int temp;
            cin >> temp;
            house[temp] = true;
        }
    cin >> start;
    start;
    pq.push({{0,0},start}); ///Dist Ingredients_left node
    dist[start][0] = 0;
    while(not pq.empty())
        {
            int now = pq.top().second;
            int nowDist = pq.top().first.first;
            int nowLeft = pq.top().first.second;
            pq.pop();

            if(visited[now][nowLeft])continue;
            visited[now][nowLeft] = true;

            for(auto &e : arr[now])
                {
                    int nex = e.second;
                    int w = e.first;

                    if(dist[now][nowLeft] + w < dist[nex][nowLeft])
                        {
                        	dist[nex][nowLeft] = dist[now][nowLeft] + w;
                            pq.push({{dist[nex][nowLeft],nowLeft},nex});
                        }

					if(house[nex] and nowLeft < k and dist[now][nowLeft] + w < dist[nex][nowLeft+1])
                        {
                        	dist[nex][nowLeft+1] = dist[now][nowLeft] + w;
                            pq.push({{dist[nex][nowLeft+1],nowLeft+1},nex});
                        }
                }
        }
        cout << (dist[start][k] == INF ? "NO FOOD :(" : to_string(dist[start][k]));

}
