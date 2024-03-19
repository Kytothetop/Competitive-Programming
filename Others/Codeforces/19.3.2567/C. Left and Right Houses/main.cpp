#include <bits/stdc++.h>

using namespace std;
//typedef long long int lli;
//typedef long double db;
void sol()
{
    int n;
    cin >> n;
    string stemp;
    bool arr[n];
    cin >> stemp;
    int lft = 0, rgt = 0;

    for(int i =0; i < n ; i++)
        {
            arr[i] = (bool)(stemp[i] - '0');
            if(arr[i])
                {
                    rgt++;
                }
            else
                {
                    lft++;
                }
        }
    int l0 =0, r1 =0;
    int mx = INT_MAX;
    int best = 0;
    for(int i =0; i < n ; i++)
        {
            if(not arr[i]) // 0
                {
                    l0++;
                }
            else // 1
                {
                    r1++;
                }
//			if((l0 - r1)*2 >= i)
			if(l0*2 >= i)
			{
				best = i;
				break;
			}
//			int happy = abs(r1 - l0);
//			if(happy > mn)
//			{
//				mn = happy;
//				best = i;
//			}
        }
        cout << best << '\n';
//	for(int i =0; i < n ; i++)
//	{
//		cout << arr[i] << '\n';
//	}





}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        {
            sol();
        }
}
