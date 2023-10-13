#include <bits/stdc++.h>
/*
Task    :   plab015
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
/**
7 0
-1 9 5 0 0 288 -10
 */


using namespace std;

void display(int A[], int n)
{
    cout << A[0];
    for(int i = 1 ; i<n; i++)
        {
            cout << ' ' << A[i];
        }
}
int main()
{
    int n,cmm; // cmm -> command
    cin >> n >> cmm;
    int arr [n];
    for(int i = 0 ; i<n; i++)
        {
            cin >> arr[i];
        }
    int m = sizeof(arr) / sizeof(arr[0]);
    if(cmm==0)
        {
            sort(arr, arr + m);
        }
    else
        {
            sort(arr, arr + n, greater<int>());
        }
    display(arr,n);
    return 0;
}
