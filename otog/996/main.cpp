#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n),brr(n);
    for(int i=0; i < n ; i++)cin >> brr[i];
    for(int i=0; i < n ; i++)cin >> arr[i];

    int ans=0;

    vector<int> lis,lds;
    vector<int> nowLis(n),nowLds(n);
    lis.push_back(arr[0]);
    lds.push_back(arr[0]);
    for (int l = 1; l < n; l++)
        {
            if(lis.back() < arr[l])
                {
                    lis.push_back(arr[l]);
                    nowLis[l] =lis.size();
                }
            else
                {
                    int pos = lower_bound(lis.begin(),lis.end(),arr[l]) - lis.begin();
                    lis[pos] = arr[l];
                    nowLis[l] = pos+1;
                }
            if(lds.back() > arr[l])
                {
                    lds.push_back(arr[l]);
                    nowLds[l] =lds.size();
                }
            else
                {
                    int pos = lower_bound(lds.begin(),lds.end(),arr[l],greater<int>()) - lds.begin();
                    lds[pos] = arr[l];
                    nowLds[l] = pos+1;
                }
        }
    for(int l =0; l < n ; l++)
        {
            ans += brr[l] * (nowLis[l]+nowLds[l]);
            cout << "LIS for [0..." << l << "]: " << nowLis[l] << endl;
            cout << "LDS for [" << l << "..." << n - 1 << "]: " << nowLds[l] << endl;
            cout << brr[l] << " * (" << (nowLis[l]+nowLds[l]) << ") = " << brr[l] * (nowLis[l]+nowLds[l]) << "\n";
        }
    cout << ans;
}
