#include <bits/stdc++.h>
using namespace std;
using ll = long int;

struct kk {
    ll x, y;
};

ll dd(const kk& a, const kk& b) {
    return abs(b.x - a.x) + abs(a.y - b.y);
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    ll zx, zy, r;
    cin >> n >> zx >> zy >> r;

    kk start, target;
    vector<kk> frr;
//
//    ll mn1 = LONG_MAX;
//    ll mn2 = LONG_MAX;
    ll mn1 = INT_MAX;
    ll mn2 = INT_MAX;
//    ll temp1, temp2;
    for (int i = 0; i < n; i++) {
			kk now;
        cin >> now.x >> now.y;
        if (i == 0) start = now;
        if (i == n - 1) target = now;
        if ((pow((now.x - zx), 2) + pow((now.y - zy), 2)) <= pow(r, 2) and r > 0)
            frr.push_back(now);
    }

//    mn1 = dd(start, frr[0]);
//    mn2 = dd(target, frr[0]);

    for (const auto& e : frr) {
        mn1 = min(mn1, dd(e, start));
        mn2 = min(mn2, dd(e, target));
    }

    // when r == 0
    ll aa = abs(start.x - target.x) + abs(start.y - target.y);

//    cout << fixed << setprecision(0);
    cout << min((mn1 + mn2),(aa) );

    return 0;
}
/*
#include <bits/stdc++.h>

using namespace std;
using ll = long double;
struct Node
{
    ll x,y;
};

//using pii = pair<int,int>;
int n;
ll zx,zy,r;
//    vector<int> x,y;
//vector<Node> pos;
Node start,target;
//	vector<vector<pii>> pos;

//vector<Node> frr;

bool inside(Node s)
{
    return (pow((zx-s.x),2) + pow((zy-s.y),2) <= pow(r,2));
}
//ll dist(Node a, Node b)
//{
//    return sqrt(pow((b.x-a.x),2) + pow((a.y-b.y),2));
//}
long long int dd(Node a, Node b)
{
    return (abs((b.x-a.x)) + abs((a.y-b.y)));
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
    ll gx;
    bool flg = 0;
    cin >> n >> zx >> zy >> r;
    ll mn1 = 0.0,mn2 = 0.0;

    for(int i =0; i < n ; i++)
        {
            Node now;
            cin >> now.x >> now.y;
            if(i == 0)start = now;
            if(i == n-1)target = now;

//            if (((pow(now.x - zx,2)) + pow((now.y - zy),2) <= r * r) and r > 0)
			if(inside(now) and r > 0)
                {
                    ll temp1 = dd(now, start);
                    ll temp2 = dd(now, target);
                    if (mn1 == 0.0 && mn2 == 0.0)
                        {
                            mn1 = temp1;
                            mn2 = temp2;
                        }
//                    frr.push_back(now);
//					mn1 = min(mn1,temp1);
//					mn2 = min(mn2,temp2);
                    if(temp1 < mn1)mn1 = temp1;
                    if(temp2 < mn2)mn2 = temp2;
                }
        }
        if(r == 0)
		{
			mn1 = dd(start,target);
		}
    cout << mn1 << ' ' <<  mn2 << ' ';
    cout << mn1 + mn2;
}

*/
