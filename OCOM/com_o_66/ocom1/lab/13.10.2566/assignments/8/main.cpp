#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int cnt =0;
    string arr;
    cin >> arr;

    sort(arr.begin(), arr.end());
    do
        {
            for (auto &e : arr)
                {
                    cout << e << ' ';
                }
            cout << '\n';
            cnt++;
        }
    while (next_permutation(arr.begin(), arr.end()));

//    for (auto &e : arr)
//        {
//            cout << e << ' ';
//        }
	cout << cnt;
    return 0;
}
