#include <bits/stdc++.h>

using namespace std;
using pii = pair<int,int>;
#define each(i,a) for(int i =0; i < a ; i++)
#define inf (1e9+7)
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int n,edge,start,target;
    cin >> n >> edge >> start >> target;

	vector<vector<pair<int,int>>> arr(n);
	vector<int> dist(n,inf);
	vector<bool> flg(n,0);
	priority_queue <pii, vector<pii> , greater<pii>> pq;

	for(int i =0; i < edge ; i++)
	{
		int temp1,temp2,temp3;
		cin >> temp1 >> temp2 >> temp3;
		arr[temp1].push_back({temp3,temp2});
		arr[temp2].push_back({temp3,temp1});
	}

	dist[start] = 0;
	pq.push({0,start});
	while(not pq.empty())
	{
		auto now = pq.top();
//		cout << now.first << ' ' << now.second << '\n';
		int nnod = now.second;
		int nweg = now.first;
		pq.pop();
		if(flg[nnod])
		{
			continue;
		}
		flg[nnod] = true;
		for(auto &e : arr[nnod])
		{
			int nod = e.second;
			int weg = e.first;
			if(dist[nod] > dist[nnod] + weg)
			{
				//Relax
				dist[nod] = nweg+weg;
				pq.push({dist[nod], nod});
			}
		}
	}
	cout << dist[target] << '\n' << dist[target]*20;

}
