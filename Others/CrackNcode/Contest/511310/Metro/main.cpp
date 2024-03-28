#include <iostream>

using namespace std;
/*
7 4
4 12
0 1 2 6
3 2
0 3 5
4 6
1 4 3 6
2 5
4 3
*/
//    vector<vector<vector<pair<int,int>>>> arr (n, vector<vector<pair<int,int>>> (n,vector<pair<int,int>>(n)));
//	vector<vector<pair<int,int>>> arr(n,vector<pair<int,int>>(n));
int main()
{
    int n,edge; // n , m = node and edge
    cin >> n >> edge;
	vector<vector<pair<int,int>>> arr(n);
	vector<set<int>> sai(edge);
	for(int i =0 ; i < edge ; i++)
	{
		int station,fare;
		cin >> station >> fare;
		set<int> tmp;
		for(int j = 0 ; j < station ; j++)
		{
			cin >> temp;
			tmp.set(temp);
		}
		sai[i].push_back(tmp);
	}




}
