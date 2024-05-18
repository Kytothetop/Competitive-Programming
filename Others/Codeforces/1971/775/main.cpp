#include <bits/stdc++.h>

using namespace std;
const int MAXN = 505;
const int INF = 1e9;

struct Item
{
    int price;
    int piece;
    friend Item operator + (const Item& lhs, const Item& rhs)
    {
        return Item
        {
            lhs.price + rhs.price,
            lhs.piece + rhs.piece,
        };
    }
    friend bool operator < (const Item& lhs, const Item& rhs)
    {
        return std::tie(lhs.price, rhs.piece) < std::tie(rhs.price, lhs.piece);
    }
};

#define for_(i,k,n) for(int i = k; i <= n; ++i)

Item dp[MAXN][MAXN];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    using ll = int;
    using pii = pair<ll,ll>;
    using ppi = pair<pii,ll>;
    fill_n(*dp, MAXN * MAXN, Item { INF, 0 });


    cin >> n >> m >>q;
//    vector<ll> nodeval(n);
//    vector<vector<pii>> adj(n);
    for_(i,1,n)
        {
//            cin >> nodeval[i];
            ll price;
            cin >> price;
            dp[i][i] = Item { price, 1 };
        }
    while(m--)
        {
        	int u,v,w;
            cin >> u >> v >> w;
//            u--;
//            v--;
            dp[u][v] = dp[v][u] = Item {w, 2};
//        adj[u].push_back({w,v});
//        adj[v].push_back({w,u});
        }
    for_(i,1,n)
        {
            for_(j,1,n)
                {
                    dp[i][j] = min(dp[i][j], dp[i][i] + dp[j][j]);
                }
        }



///Floyd
    for_(k,1,n)
        {
            for_(i,1,n)
                {
                    for_(j,1,n)
                        {
                            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                        }
                }
        }

        while(q--)
		{
			ll start,target;
			cin >> start >> target;
//			start--;
//			target--;
			cout << dp[start][target].price << ' ' << dp[start][target].piece << '\n';
		}


}








//    vector<bool> processed(n,false);
//    vector<vector<pii>> memoDist(n,vector<ll>(n));
//    while(q--)
//        {
//            ///Djikstra
//            ll start,target;
//            cin >> start >> target;
//            if(processed[start] or processed[target])
//                {
//                	if(memoDist[start][target].first < nodeval[])
//                    cout << memoDist[start][target].first << ' ' << memoDist[start][target].second << '\n';
//                    continue;
//                }
//            vector<ll> dist(n,INF);
//            vector<ll> nodeLeft(n,n+1);
//            vector<vector<bool>> visited(n,vector<bool>(n+1,false));
//            priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
//            pq.push({{0,(n+1)-0},start}); /// Dist Node_left Node
//            dist[start] = 0;
//            ll mx = LLONG_MIN;
//            while(not pq.empty())
//                {
//                    ll now = pq.top().second;
//                    ll nowDist = pq.top().first.first;
//                    ll nowLeft = pq.top().first.second;
//                    pq.pop();
//                    if(visited[now][nowLeft])continue;
//                    visited[now][nowLeft] = true;
//
//                    for(auto &e : adj[now])
//                        {
//                            ll nex = e.second;
//                            ll nexDist = e.first;
//                            if((nexDist < dist[nex]) or (((nexDist == dist[nex]) and (nowLeft < nodeLeft[now]) and (not visited[now][nowLeft-1]))))
//                                {
//                                    pq.push({{nexDist,nowLeft-1},nex}); /// Dist Node_left Node
//                                    dist[nex] = nexDist;
//                                    nodeLeft[nex] = nowLeft-1;
//                                }
//                        }
//                }
//			memoDist[start] = dist;
//			processed[start] = true;
//			cout << dist[target] << ' ' << (n+1) - nodeLeft[target] << '\n';
//        }


//}
