#include <bits/stdc++.h>

using namespace std;

/*
12

10
60
70
80
90
100
20
40
30
50
30
40

40
*/


int n,k,x;
set<int> s;

int main()
{
    cout << "\nGive n\n: ";
    cin >> n;
    cout << "\nGive set member\n";
    for(int i=0; i<n ; i++)
        {
            cin >> x;
            s.insert(x);
        }
    cout << "\nGive key\n: ";
    cin >> k;

    for(auto e:s)
        {
            cout << e << endl;
        }

    set<int>::iterator it;
    it = lower_bound(s.begin(),s.end(),k);

    cout << "\nLower: " << *it;

    it = upper_bound(s.begin(),s.end(),k);
    if(it!=s.end())
        {
            cout << "\nUpper: " << *it;
            cout << '\n';
        }
    else
        {
            cout << "\nUpper: does not exist.\n";
        }

    return 0;
}
