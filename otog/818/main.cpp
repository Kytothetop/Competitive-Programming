#include <bits/stdc++.h>
/*
5 2
0 1
2 2
3 6
6 6
9 10
10
15

output: 4
*/
using namespace std;
using ll = long long;
using pii = pair<ll,ll>;

inline ll cal(const pii &l, const pii &r)
{
    return abs(l.first-r.first)+abs(l.second-r.second);
}

struct node
{
    int id;
    pii pos;
    int layer =0;
    ll energy =0;
    bool operator<(const node& rhs) const {
      if(rhs.layer > this->layer) return true;
      if(rhs.energy < this->energy) return true;
      else return false;
  }
};

int main()
{
    int n,m;
    cin >> n >> m;
//    vector<pii> arr(n);
    vector<node> arr(n);
    vector<int> quest(m);
    for(int i =0; i < n; i++)
        {
            ll x,y;
            cin >> x >> y;
//            arr[i] = {x,y};
//            arr[i] = {i,{x,y},0};
            arr[i].id = i;
            arr[i].pos = {x,y};
        }
    node start = arr[0],en = arr[n-1];
    for(int i=0; i < m ; i++)
        {
            cin >> quest[i];
        }
    sort(quest.begin(),quest.end());

    ll ff = quest[0];
    ///
    priority_queue<node> pq;/// Required energy, node // Max_Heap
    vector<bool> visited(n,false);

//    pq({0,{0,start,0}}); ///require , id pos layer
    pq.push(start); ///layer require id pos

    int best =INT_MAX;
    ll bestdist =LLONG_MAX;

    while(not pq.empty())
        {
            node now = pq.top();
            ll nowReq = now.energy;
            pq.pop();
            if(now.id == n-1 and now.layer < best)
			{
				best = now.layer;
				bestdist = nowReq;
			}
            if(visited[now.id])continue;
            visited[now.id] = true;


            if(nowReq >= ff)
                {
                    continue;
                }
            for(int i = now.id +1; i < n; i++)
                {
//                	node nex = {i, arr[i], now.layer +1};
                	node nex = arr[i];
                	nex.layer = now.layer+1;
                	nex.energy = max(nowReq,cal(now.pos,nex.pos));
					pq.push(nex);
                }
        }
	cout << best << ' ' << bestdist;







}
