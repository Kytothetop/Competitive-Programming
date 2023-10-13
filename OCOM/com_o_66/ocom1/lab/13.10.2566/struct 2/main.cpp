#include <bits/stdc++.h>
using namespace std;
const int n = 10;
struct point
{
	int x=0;
	int y=0;
	int z=0;
}p1[n],p2[n];

double dist(point a, point b)
{
	return(sqrt( pow(a.x-b.x,2) + pow(a.y-b.y,2) + pow(a.z-b.z,2) ));
}

int main()
{
    for(int i =0; i <n ; i++)
	{
		cin >> p1[i].x >> p1[i].y >> p1[i].z >> p2[i].x >> p2[i].y>> p2[i].z;
		cout << dist(p1[i],p2[i]) << '\n';
	}
}
