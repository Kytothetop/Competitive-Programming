#include <bits/stdc++.h>

using namespace std;
/*
5 3
20 2 5
40 4 5
30 1 10
0 0 15

*/
int main()
{
#define INF (LLONG_MAX)
    using ll = long long;
    using pii = pair<ll,ll>;
    using ppi = pair<pii,ll>;

    ll n,k;
    cin >> n >> k;
    vector<ll> arr(n-1); /// Cost from i to i+1
    vector<pair<ll,ll>> brr(n-1); /// Cost from i to x
    vector<vector<ll>> dist(n,vector<ll>(k+10,INF));
    vector<vector<ll>> visited(n,vector<ll>(k+10,false));
    ll scc =0;
    for(ll i =0,a,x,b; i < n-1; i ++)
        {
            cin >> a >> x >> b;
            arr[i] = a;
            brr[i] = {x,b};
            scc += a;
        }
    if(k == 0)
	{
		cout << scc;
		return 0;
	}

    priority_queue<ppi,vector<ppi>, greater<ppi>> pq;
    pq.push({{0,0},0}); /// Dist ticket_left node
    dist[0][0] = 0;
    while(not pq.empty())
        {
            ll nowDist = pq.top().first.first;
            ll now = pq.top().second;
            ll nowLeft = pq.top().first.second;
            pq.pop();
//            cout << "Now: " << now << " Tickets: " << nowLeft << endl;

            if(visited[now][nowLeft])continue;
            visited[now][nowLeft]=1;
            if(now == n-1)break;


            {
                ll nex = now+1;
                ll nexDist = nowDist + arr[now];
                if(nexDist < dist[nex][nowLeft])
                    {
                        pq.push({{nexDist,nowLeft},nex});
                        dist[nex][nowLeft] = nexDist;
                    }
            }

            if(++nowLeft <= k)
                {
                    ll nex = brr[now].first;
                    ll nexDist = nowDist + brr[now].second;
                    if(nexDist < dist[nex][nowLeft] and nexDist < dist[nex][nowLeft-1])
                        {
                            pq.push({{nexDist,nowLeft},nex});
                            dist[nex][nowLeft] = nexDist;
                        }
                }



        }
    cout << *min_element(dist[n-1].begin(),dist[n-1].end());
}
