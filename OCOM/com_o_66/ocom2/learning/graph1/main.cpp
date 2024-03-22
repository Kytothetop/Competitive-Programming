#include <bits/stdc++.h>

using namespace std;

int n,e,s,t;
/*
8 10 5 7

3 6 20
4 0 70
2 6 2000
5 1 90
2 7 10
7 0 3000
5 4 40
3 2 50
0 5 1000
5 3 80
*/
map<int,set<pair<int,int>>> arr;
map<int,bool> mark;
bool flg =0;
void go(int st)
{

    if(flg)
        {
//            cout << st << '.';
            return;
        }
    mark[st] = 1;
    auto e = arr[st];
    for(auto &c : e)
        {
            int nxt = c.second;
            if(not mark[nxt])
                {
                	if(not flg)
                    cout << nxt << ' ';
                    if(nxt == t){flg=1;return;}
                    go(nxt);
                }
        }

}
int main()
{
    cin >> n >> e >> s >> t;
    for(int i =0; i < e ; i++)
        {
            int x,y,w;
            cin >> x >> y >> w;
            arr[x].insert({w,y});
            arr[y].insert({w,x});
        }
//	for(auto &e :arr)
//	{
//		cout << "Node: "<<e.first << "-> ";
//		for(auto &c : e.second)
//		{
//			cout << c.second << ": weight = " << c.first << " , ";
//		}
//		cout << '\n';
//	}

    mark[s] = true;
    cout << s << ": ";
    go(s);

}
