#include <bits/stdc++.h>

using namespace std;
/*
3 10
2 1 c
3 3 e
1 3 a
3 1 e
3 2 c
2 1 d
1 3 b
2 1 a
2 2 a
1 2 d
3 8
cadaaaac
*/
vector<vector<pair<long long,char>>> arr(155);
string ff;
long long n,e;
vector<vector<long long>> dp(155, vector<long long>(2505, -1));
const long long Mod = 1e9 + 7;
long long  len;
long long recur(long long s,long long i = 0)
{
	if(dp[s][i] != -1) return dp[s][i];
	if(i == len) return dp[s][i] = 1;
	long long res = 0;
    for(auto e : arr[s])
        {
            if(e.second != ff[i]) continue;
			res = (res + recur(e.first, i+1) % Mod);

        }
	return dp[s][i] = res;
}
int main()
{
    cin >> n >> e;
    for(long long i =0; i < e ; i++)
        {
            long long temp1,temp2;
            char temp3;
            cin >> temp1 >> temp2 >> temp3;
            arr[temp1].push_back({temp2,temp3});
        }
    long long start;
    cin >> start >> len;
    cin >> ff;
    cout << recur(start) % Mod;
}
