#include <bits/stdc++.h>

using namespace std;
//typedef long long int lli;
//typedef long double db;
void sol()
{
	priority_queue<pair<int,pair<int,int>>, vector<int>> q1;
//	queue<int> q1;


    int n,d, tm =INT_MAX;
    cin >> n >> d;
	for(int i = 0 ; i < n ; i++)
	{
		int prio, eat;
		cin >> prio>> eat;
		tm--;
		q1.push({tm, {prio,eat}});

	}

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        {
            sol();
        }
}
