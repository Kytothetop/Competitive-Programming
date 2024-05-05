#include <bits/stdc++.h>

using namespace std;
/*
6 8 3 7
55 100 3 4 100 2000
1 2
2 3
3 4
4 5
5 6
1 5
2 4
1 6
*/
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    using ll = long long;
    // 1-Based indexing
    ll n,m,s,q;
    cin >> n >> m >> s >> q;
    s--;

    vector<ll> arr(n);

//	vector<vector<pair<ll,ll>>> adj(n+1);
    vector<vector<ll>> adj(n);
    for(ll i =0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
    for(ll i =0; i < m ; i++)
        {
            ll u,v;
            cin >> u >> v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    ///Start node value = 0

    ///BFS

    //Find each node's layer/depth from start
    //node "X" will be on layer[select] + 1
    //Which means we can store max element in each layer and compare
    queue<ll> quu;
    quu.push(s);
//    arr[s] = 0;
    vector<ll> layer(n,33);
    layer[s] = 0;
    vector<ll> mxOfLayer(n+10,0);
    vector<bool> visited(n,false);
    visited[s] = true;

    mxOfLayer[0] = arr[s];
    ll mxDepth = -1;
    while(not quu.empty())
        {
            ll now = quu.front();
            quu.pop();
//            if(visited[now])continue;
//            visited[now]=true;
            mxDepth = max(mxDepth,layer[now]);

            for(auto &e : adj[now])
                {
                    ll next = e;
                    if(not visited[next])
                        {
                            visited[next]=true;
                            quu.push({next});
                            layer[next] = layer[now]+1;
                            if(mxOfLayer[layer[next]] <= arr[next])
                                {
                                    mxOfLayer[layer[next]] = arr[next];
//                                    if(mxOfLayer[layer[next]] == 55)cout << "wth";
//                                    if(mxOfLayer[layer[next]] == 100)cout << "bruh";
                                }
                        }
                }
        }
    ll sum =0;
    for(ll i =0; i <= mxDepth; i++) ///Exclude layer 0 (Start)
        {
            sum += mxOfLayer[i];
//            cout << mxOfLayer[i] << ' ';
        }

//    cout << sum << "\n\n";

    while(q--)
        {
            short quest;
            cin >> quest;
            if(quest == 1)
                {
                    int selected,y;
                    cin >> selected >> y;
                    selected--;
                    if(mxOfLayer[layer[selected]+1] > y)
                        {
                            cout << sum << '\n';
                        }
                    else
                        {
                            cout << sum + y - mxOfLayer[layer[selected]+1] << '\n';
                        }
                }
            else
                {
                	ll smm = 0;
                	ll y;
                    cin >> y;
//                    if(smm !=0)
//                        {
//                            cout << smm << '\n';
//                            continue;
//                        }

                    for(int selected =0; selected < n; selected++)
                        {
//                            int selected,y;
                            if(mxOfLayer[layer[selected]+1] > y)
                                {
                                    smm += sum;
                                }
                            else
                                {
                                    smm += sum + y - mxOfLayer[layer[selected]+1];
                                }
                        }
					cout << smm;
                }
        }
}
