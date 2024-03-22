#include <bits/stdc++.h>

using namespace std;
/*
8 10 5 7
7 2 10
4 0 70
6 3 20
5 0 1000
3 2 50
0 7 3000
4 5 40
2 6 2000
5 3 80
1 5 90

*/
vector<bool> visited;
int n = 11, edge, target = 7;
map<int,set<int>> arr;
int ans1,ans2;
map<int,int> dd;
queue<int> q;
void bfs(int s)
{
    q.push(s);
    visited[s] = true;
    dd[s] = 0;
    while(not q.empty())
        {
            int id = q.front();
            q.pop();
            if(id == target)
                {
                    ans1 = id;
                    ans2 = dd[id];
                }
            for(auto &e : arr[id])
                {
                    if (not visited[e])
                        {
                            q.push(e);
                            visited[e] = true; // Mark e as visited
                            dd[e] = dd[id] + 1;
                        }
                }
        }
    return;
}
int main()
{
    int start;
    cin >> n >> edge >> start >> target;
    visited.assign(n,false);
    int mx = -1;
    for(int i =0; i < edge; i++)
        {
            int temp1,temp2,temp3;
            cin >> temp1 >> temp2 >> temp3;

            arr[temp1].insert(temp2);
            arr[temp2].insert(temp1);
        }
	for(int i =0; i < n; i++)
	{
		mx = max(mx, static_cast<int>(arr[i].size()));
	}
//    for(auto itr = arr.begin(); itr != arr.end(); itr++)
//        {
//            cout << "Node "<< itr->first << ": ";
//            for(auto &c : itr->second)
//                {
//                    cout << c << ' ';
//                }
//            cout << '\n';
//        }
    bfs(start);
    cout << ans2 << ' ' << mx;
}
