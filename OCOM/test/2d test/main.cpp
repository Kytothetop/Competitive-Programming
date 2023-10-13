
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int arr[4][3] = {
                    {1,3,5},
                    {9,4,2},
                    {1,5,7},
                    {6,5,8}
                    };


    for(auto &i : arr)  // i references each element in arr
        {
            for(auto j : i) // j makes a copy for each element in i(which is in arr)
            {
                j++;        // Changes only affect j, which is a copy.
                cout << j << ' ';
            }
            cout << '\n';
        }

        cout << '\n';

    for(auto &i : arr)  // i references each element in arr
        {
            for(auto j : i) // j makes a copy for each element in i(which is in arr)
            {
                // Previous loop changes only affect its own j, which is a copy, which means arr(and this j) is unaffected.
                cout << j << ' ';
            }
            cout << '\n';
        }

        cout << '\n';

    for(auto &i : arr) // i references each element in arr
        {
            for(auto &j : i) // j references each element in i
            {
                j *= 2; // Changes affect j, which is a reference to i(which is a reference to arr)
                        // Thus also changing arr
                cout << j << ' ';
            }
            cout << '\n';
        }

        cout << '\n';

    for(auto &i : arr) // i references each element in arr
        {
            for(auto &j : i) // j references each element in i
            {
                cout << j << ' ';   //j, which is a reference to i(which is a reference to arr)
                                    // Thus changes in arr, also affect this j.
            }
            cout << '\n';
        }

    for(auto &i = arr.begin(); i != arr.end() ; i++)
    {
        for(auto &j = *i.begin(); j != i.end(); j++)
        {
            cout << *j << ' ';
        }
        cout << '\n';
    }
}
