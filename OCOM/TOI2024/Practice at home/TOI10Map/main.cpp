#include <bits/stdc++.h>

using namespace std;
/*
Use Graph
Maybe present as trees but with sharable leaves?

properties and how to solve:
1. i nodes have i as parents -> until said by declare and 2 max parents (but only check if have parents)
2. possible for multiple nodes with no parents -> node with most descendants is at bottom-right -> Find by accumulating distance (Like DP) as you declare each relationships

*/

int main()
{
    int n,m;
    cin >> n >> m;
    int sz = n*m;
    vector<bool> orphan(sz,true);
    vector<int> dist(sz,0);
    vector<vector<int>> matrix(n,vector<int>(m,-999));
    int cnt = 0;
    map<int,pair<int,int>> node;
    map<pair<int,char>,int> relation;
//    for(int i =0; i < sz ; i++)
//	{
//		parent[i] = i;
//	}
    int start = -1;
    int mx = -1;
    for(int i =0; i < sz-1; i++)
        {
            int leaf,root;
//			bool temp2;
            char rel;
            cin >> leaf >> rel >> root;
            orphan[leaf] = false;
            relation[ {root,rel}] = leaf;
        }
    for(int i =0; i < sz-1; i++)
        {
        	int up = -10, left = -10;
        	if(relation.count({i,'U'}))up = dist[relation[{i,'U'}]]+1;
        	if(relation.count({i,'L'}))left = dist[relation[{i,'L'}]]+1;
            dist[i] = max(dist[i],max(up,left));
            if(dist[i] >= mx)
                {
                    mx = dist[i];
                    start = i;
                }
        }
    node[start] = {n-1,m-1};
    queue<int> q; // Process node
    q.push(start);
//    while()
    while(not q.empty())
        {
            cnt++;
            int now = q.front();
            q.pop();
            orphan[now] = false;
            matrix[node[now].first][node[now].second] = now;

            // U and L
            if(relation.count({now,'U'}))
                {
                    int up = relation[ {now,'U'}];
                    node[up] = {node[now].first-1,node[now].second};
//                    matrix[node[now].first-1][node[now].second] = up;
                    q.push(up);
                }
            if(relation.count({now,'L'}))
                {
                    int left = relation[ {now,'L'}];
                    node[left] = {node[now].first,node[now].second-1};
//                    matrix[node[now].first][node[now].second-1] = left;
                    q.push(left);
                }

        }
    cout << start << '\n';
    for(int i =0; i < n ; i++)
        {
            for(int j =0; j < m ; j++)
                {
                    cout << matrix[i][j] << ' ';
                }
            cout << '\n';
        }
    for(auto &e : node)
        {
            cout << e.first << ": "<< e.second.first  << ' '<< e.second.second << '\n';
        }
    cout << cnt;
}
