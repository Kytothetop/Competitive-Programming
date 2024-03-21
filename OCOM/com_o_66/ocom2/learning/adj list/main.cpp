#include <bits/stdc++.h>

using namespace std;
/*
8 7 5
5 1
5 3
5 4
4 0
3 2
3 6
2 7
*/
int n = 11, edge, target = 7;
map<int,set<int>> arr;
pair<int,int> bfs(int s)
{
	map<int,int> dd;
    queue<int> q;
    q.push(s);
    int ans1,ans2, format = 0;
    dd[s] = 0;
    cout << "From Node: ";
    while(not q.empty())
        {
            int id = q.front();
			if(format != dd[id])
			{
				format++;
				cout << "\nLayer " << format << ": ";
			}
            cout << id << ' ';
			if(id == target)
			{
				ans1 = id;
				ans2 = dd[id];
			}
            q.pop();
            for(auto &e : arr[id])
                {
                    q.push(e);
                    dd[e] = dd[id] +1;
                }
        }
	return {ans1,ans2};
}
int main()
{
    int start;
    cin >> n >> edge >> start;
    int brr[edge];

    for(int i =0; i < edge; i++)
        {
            int temp1,temp2;
            cin >> temp1 >> temp2;

            arr[temp1].insert(temp2);
        }
    for(auto itr = arr.begin(); itr != arr.end(); itr++)
        {
            cout << "Node "<< itr->first << ": ";
            for(auto &c : itr->second)
                {
                    cout << c << ' ';
                }
            cout << '\n';
        }
    auto tmp = bfs(start);
    if(tmp.second != -1)
        cout << ("\nFound: ") << tmp.first << " at " << tmp.second;
    else
        cout << ("\nDidn't find ");
    return 0;
}
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <set>

using namespace std;
//
//5
//3 2 3 5
//2 3 4
//1 4
//1 5
//1 6
//
int main()
{
    int n = 11;
    cin >> n;
    set<int> arr[n];

    for(int i =0; i < n; i++)
	{
		int edge;
		cin >> edge;
		for(int j =0 ; j < edge; j++)
		{
			int temp;
			cin >> temp;
			arr[i].insert(temp);
		}
	}
    for(int i =0; i < n; i++)
	{
		cout << "Node "<< i << ": ";
		for(auto &c : arr[i])
		{
			cout << c << ' ';
		}
		cout << '\n';
	}

}

*/
