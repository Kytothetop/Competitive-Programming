#include <iostream>
#include <math.h>
#include <climits>

using namespace std;
int arr[10], brr[10];

int n;
int recur(int i, bool flg,int sum =0, int mul = 1, int stk = 0)
{
    if(flg)
        {
        	stk++;
            sum += arr[i];
            mul *= brr[i];
        }
    if(i < n-1)
        {
            return min( recur(i+1,1,sum, mul,stk), recur(i+1,0,sum, mul,stk) );
        }
    else
        {
        	if(stk != 0)
            return abs(sum - mul);
            else
				return INT_MAX;
        }
}
int main()
{
    cin >> n;
    for(int i=0 ; i < n; i++)
        {
            cin >> brr[i] >> arr[i];
        }
    cout << min( recur(0,1), recur(0,0) );

}
//#include <iostream>
//
//using namespace std;
//#define pii pair<int,int>
//pii arr[10];
//int sum =0, mul = 1;
//int n;
//int recur(int i, bool g)
//{
//    if(i < n)
//        {
//            return min(recur(i+1,1),recur(i+1,0));
//        }
//	else
//	{
//
//	}
//}
//int main()
//{
//    cin >> n;
//    for(int i=0 ; i < n; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//	}
//    cout << min(recur(0,1),recur(0,0));
//
//}
