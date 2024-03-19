#include <bits/stdc++.h>
/*
Task    :   plab015
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
/**
7
600
5000
20000
900
80
400
30
maxtomin
2
5
3
 */


using namespace std;

int main()
{
    int n;
    string cmm; // cmm -> command
    cin >> n;
    int arr [n];
    for(int i = 0 ; i<n; i++)
        {
            cin >> arr[i];
        }
    cin >> cmm;
    int m = sizeof(arr) / sizeof(arr[0]);
    if(cmm=="mintomax")
        {
            sort(arr, arr + m);
        }
    else
        {
            sort(arr, arr + n, greater<int>());
        }
    int q;
    cin >> q;
    int qu;
    for(int i = 0 ; i<q; i++)
        {
            cin >> qu;
            cout << arr[(qu-1)];
            if(i<(q-1))
            {
                cout << '\n';
            }
        }
    return 0;
}
