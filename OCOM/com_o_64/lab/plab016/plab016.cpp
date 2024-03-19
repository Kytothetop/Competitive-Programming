#include <iostream>
#include <algorithm>
/*
Task    :   plab016
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;
int n,m,K,sum =0,cnt =0,L,H,R;
int arr[50005];

int f_bisearch(int l, int h, int k)
{
    int r, mid;
    while(l<=h)
        {
            mid = (l+h)/2;
            if(arr[mid]== k)
                {
                    r=mid;
                    return r;
                }
            else if(k>arr[mid])
                {
                    l=mid+1;
                }
            else
                {
                    h=mid-1;
                }
        }
        r=-1;
        return r;
}




int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

    sort(arr, arr+n);

    cin >> m;
    for(int i=0; i<m; i++)
        {
            cin >> K;
            L =0;
            H = n-1;
            R = f_bisearch(L,H,K);

            if(R != -1)
                {
                    cnt++;
                    sum += (n-R);
                }
        }
    cout << cnt << ' ' << sum;
}
