#include <bits/stdc++.h>

using namespace std;
string cmd = "New";
string name;
int urgency,tim =0;
vector<int> tempv;
//map<int,string> cc;
//vector<queue<int>> tt;
struct Record
{
    int x;
    int y;
};
bool cuscom ( Record a, Record b )
{
    if (a.x < b.x) return true;
    if (b.x < a.x) return false;

    // a=b for primary condition, go to secondary
    if (a.y < b.y) return true;
    if (b.y < a.y) return false;

    // ...

    return false; ;
}
map<Record,string> cc;
//vector<priority_queue<int,vector<int>,greater<int> >> tt;
int main()
{
    Record tmp;
    while(cmd != "Exit")
        {
            cin >> cmd;
            if(cmd == "New")
                {
                    tim++;
                    cin >> name >> urgency;
//                    tt[urgency].push(tim);
                    tmp.x = urgency;
                    tmp.y = tim;
                    cc.insert(pair<Record,string>(tmp, name));
                }
            else if(cmd == "Call")
                {
                    auto it = cc.begin();
                    while(it != cc.end())
                        {
                            cout << cc[(((*it).first))] << endl;
                            it++;
                        }
                }
        }
}
