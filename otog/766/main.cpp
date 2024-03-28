#include <bits/stdc++.h>

using namespace std;
#define inf (10007)
using pii = pair<int,int>;

int n,edge,k,q;
//vector<vector<int>> dist;
vector<vector<pii>> arr;
vector<vector<int>> memo;
vector<int> rest;

int djik(int start, int target)
{
    if(memo[start][target] != -1)return memo[start][target];   // Memo
	bool flg[n] = {0};

    vector<int> dist(n,inf); // node dist
    dist[start] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0,start});
    while(not q.empty())
        {
            int now = q.top().second;
            q.pop();
            if(flg[now])continue;
            flg[now] = 1;
//            cout << now << ": ";
            for(auto &next : arr[now])
                {
                    if(dist[now] + next.first < dist[next.second])
					{
						dist[next.second] = dist[now] + next.first;
						q.push({dist[next.second] , next.second});
					}
//					cout << next.second << ' ';
                }
//                cout << '\n';
    }
    for(int i =0; i < n ; i++)memo[start][i] = memo[i][start] = dist[i];
    return dist[target];
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> edge >> k >> q;
//    arr.resize(n,vector<int>(n,inf));
    arr.resize(n);
    memo.resize(n,vector<int>(n,-1));
//    nd.resize(n,inf);
    rest.resize(k);
    for(int i =0 ; i < edge ; i++)
        {
            int temp1,temp2,temp3;
            cin >> temp1 >> temp2 >> temp3;
//		arr[temp1][temp2] = temp3;
//		arr[temp2][temp1] = temp3;
            arr[temp1].push_back({temp3,temp2});
            arr[temp2].push_back({temp3,temp1});
        }
    for(int i =0 ; i < k ; i++)
        {
            cin >> rest[i];
        }
    for(int i =0 ; i < q ; i++)
        {
            int start,x, target;
            cin >> start >> x >> target;
            int sum =0;
            if(start != x)sum += djik(x,start);
            if(x != target)sum += djik(x,target);
            cout << sum << '\n';
        }


}
