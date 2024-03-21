#include <bits/stdc++.h>
/*
10
DOT10 600
ANT60 700
KHONKAEN70 801
CAT20 100
EAT90 1005
RUN100 45
RUN50 900
DOT10 300
C20 200
CAT20 90
3
CAT20 90
KHON70 801
EAT90 1005

*/
using namespace std;

int main()
{
    int n;
    cin >>n;
    map<pair<string,int>,int> cnt;
    for(int i =0; i<n ; i++)
        {
            int temp1;
            string temp2;
            cin >> temp2 >> temp1;
            cnt[ {temp2,temp1}]++;
        }
//	for(auto &e : cnt)
//	{
//		cout << e.second;
//	}
    int m;
    cin >> m;
    int sum =0, even =0;
    for(int i =0; i < m ; i++)
        {
            string ans;
            int ani;
            cin >> ans >> ani;
            pair<string,int> mp = {ans,ani};
            auto itr = cnt.find(mp);
            if(itr != cnt.end())
                {
                    sum += cnt[mp];
                    if(ani%2==0)
                        even += cnt[mp];
                }
        }
	cout << sum << ' ' << even << '\n';
}
