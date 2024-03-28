#include <iostream>

using namespace std;
/*
6 8
1 2 3

*/

    priority_queue<pii, vector<pii> , greater<pii>> pq;
	vector<vector<int>> kk;
	vector<int> parent;
	int n, edge;
	using pii = pair<int,int>;
int sfind(int x)

void funion(int x,y)
{
	parent[x] = y;
}
int main()
{
	cin >> n >> edge;
	kk.resize(n+1);

	for(int i =0; i < edge ; i++)
	{
		int temp1,temp2,temp3;
		cin >> temp1 >> temp2 >> temp3;
		kk[temp1].push_back({temp3,temp2});
		kk[temp2].push_back({temp3,temp1});
	}
	for(int i =1  ; i <= n ; i++)parent[i] = i;

	int start = 0;
	pq.push({0,start});
	while(not pq.empty())
	{
		int now = pq.top().second;
		int ww = pq.top().first;
		pq.pop();
		cout << now << " : " << ww << '\n';

		int pxx = ffind()
	}
}
