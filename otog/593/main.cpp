#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> arrE;
    priority_queue<int,vector<int>> arrO;
    for(int i =0 ; i < n ; i++)
    {
        cin >> temp;
        if(temp %2 == 0)
        {
            arrE.push(temp);
        }
        else
            arrO.push(temp);
    }
    while(! arrE.empty())
    {
        cout << arrE.top();
//        if(arrE.size() > 1)
            cout << ' ';
        arrE.pop();
    }
    while(! arrO.empty())
    {
        cout << arrO.top();
        if(arrO.size() > 1)
            cout << ' ';

        arrO.pop();
    }

}
