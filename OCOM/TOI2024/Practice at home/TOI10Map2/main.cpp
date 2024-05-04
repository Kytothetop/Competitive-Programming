#include <bits/stdc++.h>

using namespace std;
/*
Use Graph
Maybe present as trees but with sharable leaves?

properties and how to solve:
1. i nodes have i as parents -> until said by declare and 2 max parents (but only check if have parents)
2. possible for multiple nodes with no parents -> node with most descendants is at bottom-right -> Find by accumulating distance (Like DP) as you declare each relationships

*/
struct node
{
//    int val=-1;
    int x,y;
    int u=-1,d=-1,l=-1,r=-1; //value of each adj
};
int main()
{
    int n,m;
    cin >> n >> m;
    int sz = n*m-1;
    vector<vector<int>> matrix(n,vector<int>(m,-999));
//    int cnt = 0;
//    map<int,pair<int,int>> node;
//    map<pair<int,char>,int> relation;
//    for(int i =0; i < sz ; i++)
//	{
//		parent[i] = i;
//	}
    vector<node> arr(sz+1);
    vector<bool> visited(sz+1,0);
    int start = -1;
    int mny = INT_MAX,mnx = INT_MAX;
    for(int i =0; i < sz; i++)
        {
            int leaf,root;
//			bool temp2;
            char rel;
            cin >> leaf >> rel >> root;
//            orphan[leaf] = false;
//            relation[{root,rel}] = leaf;
            if(i == 0)
                {
                    start = root;
                    arr[root].x =0;
                    arr[root].y =0;
                }
            if(rel == 'U')
                {
                    arr[root].u = leaf;
                    arr[leaf].d = root;
                }
            else
                {
                    arr[root].l = leaf;
                    arr[leaf].r = root;
                }
        }
    queue<int> q;
    q.push(start);
    while(not q.empty())
        {
            int now = q.front();
            q.pop();
            if(visited[now])
			{
				continue;
			}
			visited[now] =1;
            int next = arr[now].u;
            if(arr[now].u != -1)
                {
                    // If u exists
                    arr[next].x = arr[now].x-1;
                    arr[next].y = arr[now].y;
                    q.push(next);
                }
            next = arr[now].d;
            if(arr[now].d != -1)
                {
                    // If d exists
                    arr[next].x = arr[now].x+1;
                    arr[next].y = arr[now].y;
                    q.push(next);
                }
            next = arr[now].l;
            if(arr[now].l != -1)
                {
                    // If l exists
                    arr[next].x = arr[now].x;
                    arr[next].y = arr[now].y-1;
                    q.push(next);
                }
            next = arr[now].r;
            if(arr[now].r != -1)
                {
                    // If r exists
                    arr[next].x = arr[now].x;
                    arr[next].y = arr[now].y+1;
                    q.push(next);
                }

        }
	for(auto &e : arr)
	{
		mnx = min(mnx,e.x);
		mny = min(mny,e.y);
	}
	for(int now =0; now < sz+1 ; now++)
	{
		matrix[arr[now].x-mnx][arr[now].y-mny] = now;
	}
	for(int i =0; i < n ; i++)
	{
		for(int j =0 ; j < m ; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		if(i<n-1)cout << '\n';
	}
}
