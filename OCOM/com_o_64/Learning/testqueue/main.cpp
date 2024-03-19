#include <bits/stdc++.h>

using namespace std;
/*
5
10
20
30
40
50
*/
queue<int> q1;
int n;
int main()
{
    int x,y;
    cin >> n;
    for(int i=0; i<n; i++)
        {
            cin >> x;
            q1.push(x);
        }
    x=q1.front();
    cout << "x = " << x << '\n';
    y=q1.back();
    cout << "y = " << y << '\n';

    q1.pop();
    cout << q1.size() << '\n';
    x=q1.front();
    cout << "x = " << x << '\n';

    cout << "*** Pop all ***\n";
    while(!q1.empty())
        {
            cout << q1.front() << '\n';
            q1.pop();
            if(q1.empty())
                {
                    cout << "*** Empty. ***";
                }
        }
}
