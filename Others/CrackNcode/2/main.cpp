#include <bits/stdc++.h>

using namespace std;
int fact(int n)
{
    if(n == 1)return 1;
    return fact(n-1)*n;
}
int cnr(int n, int r = 2)
{
    int ans = 1;
    r = max(r,n-r);
    for (int i = r+1; i <= n ; i++ )
        {
            ans *= i;
        }
    for (int i = 1; i <= n-r ; i++ )
        {
            ans /= i;
        }
    return ans;


}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int area = 0;
    cin >> n >> m;
    if(n < 1 and m < 1)
	{
		cout << 0;
		return 0;
	}

    for (int x1= 0; x1<= n; x1++ )
        {
            for (int x2= 0; x2<= n; x2++ )
                {
                    for (int x3= 0; x3<= n; x3++ )
                        {
                            for (int y1= 0; y1<= m; y1++ )
                                {
                                    for (int y2= 0; y2<= m; y2++ )
                                        {
                                            for (int y3= 0; y3<= m; y3++ )
                                                {
                                                    area += abs((x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1));
//                                                    area = 4;
                                                }
                                        }
                                }
                        }
                }
        }
    cout << area/6;
////    cout << cnr(4) << ' '<< fact(3);
//    int ne,me; // occur num
//    int n,m;
//    cin >> n >> m;
//    int ns[n],ms[m]; //area for each size
//
//    for (int i =1; i<=n ; i++ )
//        {
//        	ne = cnr(n-i+1);
//        	ne = (n-i+1);
//        	ns[i-1] = ne*i;
//        	cout << ns[i-1] << " : " << ne << " : " << i <<'\n';
//        }
////    for (int i =1; i<=m ; i++ )
////        {
////        	me = cnr(m-i+1);
////        	ms[i-1] = me*i;
////        	cout << ms[i-1] << " ; " << me << " : " << i <<'\n';
////        }
//	int area =0;
//	for (int i =0;i<n ;i++ )
//	{
//		for (int j=0;j<m ;j++ )
//		{
////			area += ns[i]*ms[j];
////			cout << ns[i] << " x "<< ms[j] << " = ";
////			cout << ns[i]*ms[j] << '\n';
//			area += ns[i]*(j+1);
//			cout << ns[i] << " x "<< (j+1) << " = ";
//			cout << ns[i]*(j+1) << '\n';
//
//		}
//	}
//	cout << area*4;




    return 0;
}
