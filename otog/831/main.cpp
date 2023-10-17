#include <iostream>
//17/10/2023 Version (0.941 Seconds)
using namespace std;
long long int func(long long int n)
{
	if(n%2==0)
	{
		return func(n-1) + n;
	}
	else if(n == 1)
		return 69;
	else
		return func(n-1) + func(n-2) + n;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int q;
    cin >> q;
    for(int i =0 ; i < q; i++)
	{
		long long int temp;
		cin >> temp;
		cout << func(temp);
		if(i<q-1)cout << '\n';
	}
}
// 1/12/2022 Version (0.055 Seconds)
/*
#include <iostream>

using namespace std;
int e;
long long int fibo[70];
long long int A(int m)
{
    fibo[0] = 69;
    fibo[1] = 69;
    for (int n = 2; n <= m; n++)
    {
        if(n%2==0)
        {
            fibo[n] = fibo[n-1] + n;
        }
        else
        {
            fibo[n] = fibo[n-1] + fibo[n-2] + n;
        }
    }
    return fibo[m];
}
int main()
{
    int p;
    cin >> p;
    for (int i =0; i<p ; i++ )
    {
        cin >> e;
        cout << A(e);
        if(i<p-1)
            cout << '\n';
    }
    return 0;
}
*/
