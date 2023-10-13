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
    int n,cmm,a; // cmm -> 0:odd,1:even
    cin >> n;
    int values [n];
    for(int i = 0 ; i<n; i++)
        {
            cin >> values[i];
        }
    // temporary variable to aid in swapping
    int temp;

    // for loop to iterate through the array
    for(int i = 0; i < n; i++)
        {
            // if current element is even, do nothing
            if(values[i] % 2 == 0)
                {
                    continue;
                }
            // else if current element is odd,
            // run another for loop to check
            // every subsequent element in the array
            for(int j = i + 1; j < n; j++)
                {
                    // if the subsequent element is even
                    if(values[j] % 2 == 0)
                        {
                            // swap the current element and this subsequent element
                            temp = values[i];
                            values[i] = values[j];
                            values[j] = temp;
                        }
                }
        }
    int m = sizeof(values) / sizeof(values[0]);

    if(cmm==0)
        {
            sort(evening, evening + m);
        }
    else
        {
            sort(odding, odding + n, greater<int>());
        }
    display(values,n);
    return 0;
}
