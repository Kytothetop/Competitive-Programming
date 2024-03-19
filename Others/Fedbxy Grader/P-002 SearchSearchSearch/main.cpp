#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n ; i++ )
        {
            cin >> arr[i];
        }
    int q;
    cin >> q;
    sort(arr, arr+n);
    for (int i =0; i<q ; i++ )
        {
            int question;
            cin >> question;
            auto e = find(arr, arr+n, question);
            if(distance(arr,e)+1 > n)
				cout << -1;
            else cout << distance(arr,e)+1;
            if(i < 	q-1) cout << '\n';
        }

}

