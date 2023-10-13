#include <bits/stdc++.h>

using namespace std;
/**
4 5

1
2
3
4

3
4
5
6
7
 */


set <int> s1,s2,s3,s4,s5;
set <int>::iterator it;
int x,n,m;
int main()
{
    cin >> n >> m;

    cout << "\n S1 set.\n";

    for(int i = 0; i<n ; i++)
    {
        cin >> x;
        s1.insert(x);
    }

    cout << "\n S2 set.";

    for(int i = 0; i<m ; i++)
    {
        cin >> x;
        s2.insert(x);
    }

    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s4,s4.begin()));
    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s5,s5.begin()));


    cout << "\n Union set.\n Size: " << s3.size();

    for(auto e:s3)
    {
        cout << e << endl;
    }


    cout << "\n Intersection set.\n Size: " << s4.size();
    for(auto e:s4)
    {
        cout << e << endl;
    }


    cout << "\n Difference(s1-s2) set.\n Size: " << s5.size();
    for(auto e:s5)
    {
        cout << e << endl;
    }
}
