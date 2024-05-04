#include <bits/stdc++.h>
/// It is a tree so just BFS it
using namespace std;
using pii = pair<int,int>;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    bool neighbor[n];
    vector<vector<pii>> arr(n);

    for(int i =0; i < n ; i++)cin >> neighbor[i];

    for(int i=0; i < n-1; i++)
        {
            int u,v,w;
            cin >> u >> v >> w;
            arr[u].push_back({w,v});
            arr[v].push_back({w,u});
        }
    for(int ijk =0; ijk < q; ijk++)
        {
            int quest;
            cin >> quest;
            if(neighbor[quest])
                {
                    cout << 0 << '\n';
                    continue;
                }


//            ///Djikstra
//            vector<int> dist(n, 1e9+5);
//            priority_queue<pii, vector<pii>, greater<pii>> pq;
//            pq.push({0,quest});
//            dist[quest] = 0;
//            int mx = INT_MIN;
//
//            while(not pq.empty())
//                {
//                    int now = pq.top().second;
//                    int nowdist = pq.top().first;
//                    pq.pop();
//                    if(nowdist > dist[now]) continue;
//
//                    for(auto &e : arr[now])
//                        {
//                            int next = e.second;
//                            int nextdist = nowdist + e.first;
////                            if(nextdist < dist[next] and not(neighbor[next]))
//							if(nextdist < dist[next])
//                                {
//                                    dist[next] = nextdist;
//                                    if(!(neighbor[next] && next != quest))
//										pq.push({nextdist,next});
//                                    if(dist[next] > mx)mx = dist[next];
//                                }
//                        }
//                }
//            cout << mx << '\n';
//        }
//}


            /// BFS
            vector<int> dist(n, INT_MAX);
            queue<int> q;
            q.push(quest);
            dist[quest] = 0;

            int mx = INT_MIN;

            while (!q.empty())
                {
                    int now = q.front();
                    q.pop();

                    for (auto &e : arr[now])
                        {
                            int next = e.second;
                            int nextdist = dist[now] + e.first;

                            if (nextdist < dist[next])
                                {
                                    dist[next] = nextdist;
                                    if(!(neighbor[next] && next != quest))q.push(next);
                                    if (dist[next] > mx)
                                        mx = dist[next];
                                }
                        }
                }

            cout << mx << '\n';
}}
