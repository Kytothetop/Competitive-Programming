#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int n;
int dp[5000][5000];
vector<int> arr;
#define INF 1e9
int eat(int l =0,int r = n-1)
{
//	if(r == INF)r = arr.size()-1;
    if(dp[l][r] != 0)return dp[l][r];
    if(l == r)return dp[l][r] = arr[l];


    return dp[l][r] = abs(arr[l] - arr[r]) + max(eat(l+1,r) + arr[l],eat(l,r-1)+ arr[r]  );
}

bool visited[5005];
int memo[5005];

ll solve(int l)
{
	if(l == n)return 0;
	ll mx = -1;
	if(visited[l])return memo[l];
	visited[l]=1;
	for(int i = l ; i < n; i++)
	{
		mx = max(mx,eat(l,i) + solve(i+1));
	}
	return memo[l] = mx;
}

int main()
{
    cin >> n;

    for(int i =0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
    cout << solve(0);

}
