#include <iostream>
#include <vector>

using namespace std;

long long n,m;
vector<long long> arr,brr,crr,drr;
//    long long amx = INT_MIN,bmx = INT_MIN;

//long long ai=0, bi=0; // ai = bi is best
// |ai-bi| <= 1
//bool val(long long L, long long R)
//{
//	for(long long i = L; i <= R ; i++)
//	{
//		if(abs(arr[i] - brr[i] <= 1))
//	}
//}
//long long sol(long long money)
//{
//	long long l =0, R = n-1;
//	long long mid = L + (R-L)/2;
//	while(l < R)
//	{
//		if(val(L,mid))
//	}
//
//
//}

//long long sol(long long money)
//{
//
//}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    arr.resize(n);
    brr.resize(n);
    crr.resize(n);
//    drr.resize(n);
    for(long long i =0 ; i < n ; i++)
        {
            cin >> arr[i];
            if(i!=0)
                {
                    arr[i] += arr[i-1];
//					arr[i] = max(arr[i], arr[i] + arr[i-1]);
//					arr[i] = max(arr[i], arr[i-1]);
                }
//		amx = max(amx,arr[i]);
        }
    for(long long i =0 ; i < n ; i++)
        {
            cin >> brr[i];
            if(i!=0)
                {
                    brr[i] += brr[i-1];
//					brr[i] = max(brr[i], brr[i] + brr[i-1]);
//					brr[i] = max(brr[i], brr[i-1]);
                }
        }
    crr[0] = arr[0] + brr[0];
    for(long long i =1 ; i < n ; i++)
        {
            arr[i] = max(arr[i],arr[i-1]);
            brr[i] = max(brr[i],brr[i-1]);
            crr[i] = arr[i] + brr[i];
        }
//    for(long long i =0 ; i < n ; i++)cout << arr[i] << ' ';cout << '\n';
//    for(long long i =0 ; i < n ; i++)cout << brr[i] << ' ';cout << '\n';
//    for(long long i =0 ; i < n ; i++)cout << crr[i] << ' ';cout << '\n';

    while(m--)
        {
            long long temp;
            cin >> temp;
//            if(temp == 0)cout << 1 << '\n';
//            else
auto itr = lower_bound(crr.begin(),crr.end(),temp);
			if(itr == crr.end()){cout << n << '\n';continue;}
			int idx = itr - crr.begin();
//			while(idx != 0 and ( arr[idx-1] >= temp or brr[idx-1] >= temp) )
//			{
//				idx--;
//			}

                cout << idx+1 << '\n';
        }

}
