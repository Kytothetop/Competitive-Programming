#include <bits/stdc++.h>

using namespace std;
int n,m,cnt =0;
void func(int arr[],int mon,int i)
{
//    if(mon>=arr[i] || arr[i] == 1)
    {
        cnt += mon/arr[i];
    }
    if(i<n-1)
        {
//            if(n/arr[i] != 0)cout << '\n';
            func(arr,mon%arr[i],i+1);
        }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int arr[n];
    for (int i =0; i<n ; i++ )
        {
            cin >> arr[i];
        }
    sort(arr,arr+n,greater<int>());
    for (int j=0; j<m ; j++ )
        {
            int mon;
            cnt = 0;
            cin >> mon;
//            func(arr,mon,0);
            for(int i =0; i < n; i++)
                {
                    if(mon>=arr[i] || arr[i] == 1)
                        {
                            cnt += ((mon)/arr[i]);
                            mon = mon%arr[i];
                        }
                }
//			if(mon >=0)cnt++;
            cout << cnt;
            if(j<m-1)cout << '\n';
        }



}
