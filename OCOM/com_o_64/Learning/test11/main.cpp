#include <bits/stdc++.h>

/**
7
20
10
50
40
30
50
10
 */


using namespace std;
set<int,greater<int>> s1;
int n;
int main()
{
    int i,j;
    int x;

    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        s1.insert(x);
    }
    for(auto e:s1)
    {
        cout << e << endl;
    }


    set<int> M = {1,6,7,2};
    set<int> iterator it;
    cout << "Print elements in M via iterator.\n";
    for(it = M.begin();it!=M.end();it++)
    {
        cout << *it << endl
    }

    it = M.find(17);
    if(it!=M.end())
    {
        cout << " Found " << *it << endl;
        M.erase(M.begin,it);
    }
    else
    {
        cout << " Not found\n";
    }
    cout << "After [start,6) was deleted from M:\n"
    for(auto & e:M)
    {
        cout << e << endl;
    }
    cout << "Print elements in M via for-each.\n"
    for(it = M.begin();it!=M.end();it++)
    {
        cout << *it << endl
    }
}
