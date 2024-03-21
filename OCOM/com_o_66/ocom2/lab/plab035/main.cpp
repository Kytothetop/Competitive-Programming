#include <bits/stdc++.h>

using namespace std;
//#define N 1005
//    int arr[N][N];
map<int,set<int>> arr;
map<int,int> weight;
int node,edge;
int target;
int sum =0;
int dist = 0;
int start;

stack<int> keep;

bool flg = 0;
void dfs(int s, int ss =0, int dd = 0)
{
	if(not flg)
	keep.push(s);
    if(s != start)
        {
            ss++;
            dd += weight[s];
        }
    if(s == target)
        {
            sum = ss;
            dist = dd;
            flg = 1;
            return;
        }
    for(auto &e : arr[s])
        {
            dfs(e,ss,dd);
        }
	if(not flg)
	{
		keep.pop();
	}
}
int main()
{
    cin >> node >> edge >> start >> target;
    for(int i =0; i < edge ; i++)
        {
            int temp1,temp2,wtemp;

            cin >> temp1 >> temp2 >> wtemp;
            arr[temp1].insert(temp2);
            weight[temp2] = wtemp;
        }
    dfs(start);
//    keep.push(start);
	stack<int> q;
    while(not keep.empty())
	{
		q.push(keep.top());
		keep.pop();
	}
    while(not q.empty())
	{
		cout << q.top();
		if(q.size() > 1)
		{
			cout << "->";
		}
		q.pop();
	}
	cout << '\n';
	cout << sum << '\n' << dist;

}
