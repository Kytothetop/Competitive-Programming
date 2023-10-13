#include <bits/stdc++.h>

using namespace std;
using lli = long long int;
using pipii = pair<int,pair<int,int>>;



//const int n=1e3+10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    int a[n][n];
    bool flag[n][n];
    lli dist[n][n];

    pair<int,int> s= {-1,-1};
    pair<int,int> t;

    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                {
                    cin>>a[i][j];

                    //start and end pos
                    if(a[i][j]==0 and s.first==-1) s= {i,j};
                    if(a[i][j]==0 and s.first!=-1) t= {i,j};


                    dist[i][j]=INT_MAX;
                }
        }
    priority_queue<pipii, vector<pipii>, greater<pipii>> pq;
    pq.push({0,{s.first,s.second}});
    while(!pq.empty())
        {
            int W=pq.top().first,I=pq.top().second.first,J=pq.top().second.second; //W = curr val , I = X pos , J = Y pos
            pq.pop();

            if(flag[I][J]) continue;
            flag[I][J]=true;

            pair<int,int> move[4]= {{1,0},{-1,0},{0,-1},{0,1}};
            for(int k=0; k<4; k++)
                {
                    int i=I+move[k].first,j=J+move[k].second;
                    if(i>=0 and i<n and j>=0 and j<n)
                        {
                            if(!flag[i][j] and a[i][j]+W < dist[i][j])
                                {
                                    dist[i][j]=a[i][j]+W;
                                    pq.push({dist[i][j],{i,j}});
                                }
                        }
                }
        }
    cout<<dist[t.first][t.second]<<'\n';
    return 0;
}
