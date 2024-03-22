#include <bits/stdc++.h>

using namespace std;

int n,e,s,t;
/*
10 9 5 7
3 6
5 1
4 8
3 2
5 4
4 0
5 3
2 7
8 9

*/
map<int,set<int>> arr;
queue<int> q;
bool flg =0;
int go()
{
	map<int,int> dist;
	q.push(s);
	dist[s] = 0;
	while(not q.empty())
	{
		int now = q.front();
		q.pop();
		if(now == t)
			return dist[now];

		for(auto &e : arr[now])
		{
			dist[e] = dist[now]+1;
			q.push(e);
		}
	}
}
int main()
{
    cin >> n >> e >> s >> t;
    for(int i =0; i < e ; i++)
        {
            int x,y,w;
            cin >> x >> y;
            arr[x].insert(y);
        }
//	for(auto &e :arr)
//	{
//		cout << "Node: "<<e.first << "-> ";
//		for(auto &c : e.second)
//		{
//			cout << c;
//		}
//		cout << '\n';
//	}

//    cout << s << ": ";
    cout << go();

}
