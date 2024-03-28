#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll inf = LLONG_MAX;
//const ll inf = 1e20;
//const long double inf = LDBL_MAX/100;
//const long double inf = 1e15;
using pii = pair<ll,ll>;
vector<vector<pii>> edge;
vector<bool> visited;
vector<ll> dist;
int cnt =0;
int n,m,k;
void mst()
{
    priority_queue<pii> pq; // max heap
    pq.push({0,1});
    visited[1] = true;
	while(not pq.empty())
	{
		int now = pq.top().second;
		pq.pop();
		if(edge[now].empty())
		{

		}
		else
		{

		}
	}
}
int main()
{
    cout << fixed << setprecision(0);
    cout << inf;
    cin >> n >> m >> k;
    n++;

    edge.resize(n);
    dist.resize(n,inf);
    visited.resize(n);

    for(int i =0; i < m ; i++)
        {
            int temp1,temp2,temp3;
            cin >> temp1 >> temp2 >> temp3;
            edge[temp1].push_back({temp3,temp2});
            edge[temp2].push_back({temp3,temp1});
        }
	mst();
}
