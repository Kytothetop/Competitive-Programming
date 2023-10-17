#include <bits/stdc++.h>

using namespace std;
int n,m;
map<int,int> keep;
// 179
// 0 1 2 4 8 16 32 64 128 256
int recur(int money, int ith)
{
	int cost = pow(2,ith);

	if(keep.count(money) > 0)
		return keep[money];
	else
	{
		if(money >= cost)
		{
			int temp =0;
			for(int i = ith; i <= m; i++)
			{
				temp += recur(money-pow(2,i),i+1);
			}
			keep[money] = recur(money-cost,ith+1) + 1;
		}
		else if(ith < n)
			return recur(money,ith+1);
		else return 1;
	}
}
void solve()
{
    cin >> n >> m;
    for(int i =0; i <=n; i++)
		recur(i,0);
}
int main()
{
    int t;
    cin >> t;
    while(t--)solve();
}
