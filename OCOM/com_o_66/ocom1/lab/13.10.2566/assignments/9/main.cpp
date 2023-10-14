#include <iostream>
#include <algorithm>

using namespace std;
int m,cnt = 0,cnt2 = 0;
void func(int arr[],int n,int i)
{
	cnt2++;
    if(n>=arr[i] || arr[i] == 1)
        {
            cout << arr[i] << " Baht = " << n/arr[i];
            cnt += n/arr[i];
        }
    if(i<m-1)
        {
            if(n/arr[i] != 0)cout << '\n';
            func(arr,n%arr[i],i+1);
        }
    return;
}
int main()
{
    int n;
    cin >> m;
    int arr[m];
    for (int i =0; i<m ; i++ )
        {
            cin >> arr[i];
        }
    sort(arr,arr+m,greater<int>());
//	for(auto &e : arr)cout << e << ' ';
    cin >> n;
    func(arr,n,0);
    cout <<'\n'<< cnt << ' '<<cnt2*cnt;
    return 0;
}
