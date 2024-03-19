#include <bits/stdc++.h>

using namespace std;
int n, q;
int id;
string room, seat;
multimap<int,pair<string,string>> info;
int main()
{
    cin>> n >> q;
    for (int i = 0 ; i<n ; i++ )
        {
            cin >> id >> room >> seat;
            info.insert(pair<int, pair<string,string>>(id,make_pair(room,seat)));

        }
    auto it = info.begin();
    for (int i = 0 ; i<q ; i++ )
        {
            int askid;
            cin >> askid;

            auto it = info.find(askid);
            if (it == info.end())
                {
                    cout << askid << ':' << "NOT FOUND";
                    continue;
                }


            cout << askid << ':';

            auto itre = info.equal_range(askid);
            for (auto itr = itre.first; itr != itre.second; ++itr)
                {
                    cout << (itr->second.first) << '-' << (itr->second.second);
                }
            if(i<(q-1))
            cout << '\n';
//            for(auto e : )
//                cout<< info[(*it.first)].second.first << '-' <<info[(*it.first)].second.second;
        }
}
