#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n ; i++ )
        {
            cin >> arr[i];
        }
    std::sort(arr,arr+n);
    for(auto &e : arr) cout << e << ' ';
}
