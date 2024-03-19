#include <bits/stdc++.h>

using namespace std;
vector<pair<int,int>> pos;
pair<int,int> start;
vector<int> edge;
int dist(pair<int,int> &a, pair<int,int> &b)
{
    return abs(a.first-b.first) + abs(a.second-b.second) ;
}
int main()
{
    int n,m;
    cin >> n >> m;
    for (int i =0 ; i<n ; i++ )
        {
            for (int j =0; j<m ; j++ )
                {
                    char temp;
                    cin >> temp;
                    switch (temp)
                        {
                        case '1':
                            start.first = i;
                            start.second = j;
                            break;
                        case '5':
                            pos.push_back(make_pair(i,j));
                            break;

                        default:
                            break;
                        }
                }
        }
    int sum =0,mn = INT_MAX;
//	cout << '\n' << start.first+1 << ' ' << start.second+1 << "\n\n";
//	for(auto &e:pos)cout << e.first+1 << ' ' << e.second+1 << '\n';

    for(auto &e:pos)
        {
            int d = dist(start,e);
//            cout << d << '\n';
            mn = min(d,mn);
            sum += d;
		}
    cout << sum << ' ' << mn;
}
