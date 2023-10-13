#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(5);
    m.insert(6);
    m.insert(7);
    m.insert(8);
    m.insert(9);
    cout << "Normal order of m:\n";
    for(auto & e : m)
        {
            cout << e << endl;
        }

    cout << "Reverse order of m:\n";
    multiset<int>::reverse_iterator rit;
    for (rit = m.rbegin() ; rit!=m.rend(); rit++)
        {
            cout << *rit << endl;
        }
    multiset<int>::iterator it;
    int key =8;
    it = m.find(key);
    if(it!=m.end())
        {
            cout << key << " Found.";
        }
    else{cout << key << " Not Found.";}
    return 0;
}
