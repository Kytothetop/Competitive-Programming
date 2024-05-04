#include <bits/stdc++.h>

using namespace std;
struct node
{
    int x,y,dist;
};


int main()
{
    int adjx[] = {-1,0,0,1};
    int adjy[] = {0,1,-1,0};
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    queue<node> q;
//	bool visited[n][m] = {false};
    for(int i =0; i < n; i++)
        {
            for(int j =0; j < m ; j++)
                {
                    cin >> arr[i][j];
                    if(arr[i][j] == 'X')
                        {
                            q.push({i,j,0});
                        }
                }
        }
    int cnt=0,sum=0;

    while(not q.empty())
        {
            node now = q.front();
            q.pop();
//		if(visited[now.x][now.y])
//		{
//			continue;
//		}
//		visited[now.x][now.y] = true;
            arr[now.x][now.y] = 'W';

            for(int i =0; i < 4; i++)
                {
                	int nx = now.x + adjx[i],ny = now.y + adjy[i];
                	if(not (nx >= 0 && nx < n && ny >= 0 && ny < m) )continue;
                    if (arr[nx][ny] != 'W')
                        {
                            q.push({nx, ny, now.dist+1});
                            if((arr[nx][ny] == 'A'))
                                {
                                    cnt++;
                                    sum += now.dist+1;
                                }
                        }
					arr[nx][ny] = 'W';
                }
//		cout << now.x << ' ' << now.y << ": " << now.dist << '\n';
        }

//	for(int i =0; i <= n; i++)
//	{
//		for(int j =0; j <= m ; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << '\n';
//	}
    cout << cnt << ' ' << sum*2;

}
