#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
	vector<set<int>> ss(n+1);
//	bool flg[n];
	int cnt =n+1;
    for(int i =0; i < m ; i++)
	{
		int temp1,temp2;
		cin >> temp1 >> temp2;
		if(temp1 > temp2)swap(temp1,temp2);
		// temp1 < temp2
		ss[temp1].insert(temp2);
	}
	for(int i =0; i < n+1; i++)
	{
		while(not ss[i].empty())
		{
			int temp = *(ss[i].begin());
			if(temp > i)break;
			ss[temp].insert(i);
			ss[i].erase(temp);
		}
		if(ss[i].empty())cnt--;
	}
	cout << cnt;

    return 0;
}
