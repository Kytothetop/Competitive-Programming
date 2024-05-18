#include <bits/stdc++.h>
using pii = pair<int,int>;

using namespace std;

struct Point
{
    int wx,wy,ox,oy;
};


double manhat(pii& a, pii& b)
{
    return abs(a.first-b.first) + abs(a.second-b.second);
}
double manhat(Point& from, Point& to)
{
    return abs(from.ox - to.wx) + abs(from.oy - to.wy);
}


int main()
{
    int n,m,k,p;
    int x=0,y=0;
    vector<Point> warp(k);
    cin >> n >> m >> k >> p;
    for(int i =0; i < k ; i++)
        {
            cin >> warp[i].wx >> warp[i].wy >> warp[i].ox >> warp[i].oy;
        }




}
