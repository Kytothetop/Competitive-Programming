//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
///*
//3
//Mack Station TicQuicks
//11 27 35
//*/
//using lli = long long int;
//long long int fact(long long int n)
//{
//    if(n <= 1)
//        {
//            return 1;
//        }
//    return n*(fact(n-1));
//}
//int main()
//{
//    long long int n;
//    cin >> n;
////    long long int arr[n],brr[n];
//    vector<lli> arr(n), brr(n);
//    for(lli i =0; i < n; i++)
//        {
//            string temp;
//            cin >> temp;
//            arr[i] = temp.length();
//        }
//    for(lli i =0; i < n; i++)
//        {
//            cin >> brr[i];
//        }
//    lli cnt = 0;
//    lli sum = 0;
//    sort(arr.begin(),arr.end());
//    do
//        {
//            cnt++;
//            for(lli i =0; i < n ; i++)
//                {
//                    sum += (arr[i] * brr[i]);
//                    cout << arr[i] << ' ';
//                }
//            cout << '\n';
//        }
//    while (next_permutation(arr.begin(), arr.end()));
//}



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
3
Mack Station TicQuicks
11 27 35
*/
using lli = long long int;
long long int fact(long long int n)
{
    if(n <= 1)
        {
            return 1;
        }
    return n*(fact(n-1));
}
int main()
{
    long long int n;
    cin >> n;
//    long long int arr[n],brr[n];
    vector<lli> brr(n);
    lli sm = 0, sm2 = 0;
    for(lli i =0; i < n; i++)
        {
            string temp;
            cin >> temp;
            sm += temp.length();
        }
    for(lli i =0; i < n; i++)
	{
		cin >> brr[i];
//		brr[i] *= sm;
		sm2 += (brr[i] *sm);
	}
	int perm = fact(n);
	cout << perm << ' ' << sm2 * fact(n-1);
}

