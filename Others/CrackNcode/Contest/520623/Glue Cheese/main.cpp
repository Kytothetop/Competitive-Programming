#include <bits/stdc++.h>

using namespace std;

#define INF (LLONG_MAX)
bool visited[1005][1005];
int main()
{
	using ll = long long;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,ci,cj;
    cin >> n >> m >> ci >> cj;

    vector<vector<ll>> arr(n+10,vector<ll>(m+10,INF));
    vector<vector<ll>> dist(n+10,vector<ll>(m+10,INF));
    for(ll i =1; i <= n ; i++)for(ll j =1; j <= m ; j++)cin >> arr[i][j];
    ll adjx[] = {-1,0,0,1};
    ll adjy[] = {0,-1,1,0};

//	queue<pair<ll,ll>> q;
    priority_queue<pair<ll,pair<ll,ll>>, vector<pair<ll,pair<ll,ll>>>, greater<pair<ll,pair<ll,ll>>>> q;
    dist[ci][cj] = arr[ci][cj];
    q.push({dist[ci][cj],{ci,cj}});
    ll mntohole = 1e13;

    while(not q.empty())
        {
//		ll nowx = q.front().first;
//		ll nowy = q.front().second;
            ll nowx = q.top().second.first;
            ll nowy = q.top().second.second;
            q.pop();
            if(mntohole > dist[nowx][nowy] and ((nowx == 1 and nowy == 1) or (nowx == n and nowy == 1) or (nowx == n and nowy == m) or (nowx == 1 and nowy == m)))mntohole = dist[nowx][nowy];
//            if (dist[nowx][nowy] == INF) continue;
            if(visited[nowx][nowy])continue;visited[nowx][nowy] = true;

            for(ll i =0; i < 4 ; i++)
                {
                    ll nextx = nowx + adjx[i];
                    ll nexty = nowy + adjy[i];
                    if(nextx > n or nextx == 0 or nexty == 0 or nexty > m)continue;
                    if(dist[nextx][nexty] > dist[nowx][nowy] + arr[nextx][nexty])
                        {
                            dist[nextx][nexty] = dist[nowx][nowy] + arr[nextx][nexty];
                            q.push({dist[nextx][nexty],{nextx,nexty}});
                        }
                }
        }


    for(ll i =1; i <= n ; i++)
        {
            for(ll j =1; j <= m ; j++)
                {
                    cout << dist[i][j] + mntohole - arr[ci][cj]<< ' ';
                }
            cout << '\n';
        }



}
