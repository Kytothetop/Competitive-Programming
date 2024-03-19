#include <iostream>
#include <climits>
#include <math.h>

using namespace std;
// |abc - a - b - c|
// sum 1 to m of (x^3-x^2+x) =
// (pow(m,4)+2*(pow(m,3))+(7/3)*pow(m,2)+(2/3)*m)/4
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
    int m = min( recur(0,1), recur(0,0) );
    int ssm =0;
    for(int i =1; i <= m ; i++)
	{
		ssm += i*i*i - i*i + i;
	}
	cout << ssm;
//    cout << (pow(m,4)+2*(pow(m,3))+(7/3)*pow(m,2)+(2/3)*m)/4;

}
