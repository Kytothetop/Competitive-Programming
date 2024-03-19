#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    int values [n];
    int evening [n];
    int odding [n];

    for(int i = 0 ; i<n; i++)
        {
            cin >> values[i];

            if (values[i] % 2 ==0)
            {
                evening[i]=values[i];
            }
            else
            {
                odding[i]=values[i];
            }
        }
    int m = sizeof(values) / sizeof(values[0]);

    sort(evening, evening + m);
    sort(odding, odding + m, greater<int>());
    display(evening,m);
    display(odding,m);
    return 0;
}
