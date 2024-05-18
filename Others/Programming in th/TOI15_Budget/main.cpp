#include <iostream>

using namespace std;

int main()
{
	using ll = long long;
	using pll = pair<ll,ll>;
    int n,edge;
	cin >> n >> edge;
	vector<vector<pll>> arr(n);
	for(int i =0; i < edge ; i++)
	{
		int u,v,w;
		bool roof;
		cin >> u >> v >> w >> roof;
		if(roof)w = 0;

	}
}
