#include <bits/stdc++.h>

using namespace std;
//bool solve()
//{
//    // 6m
//    // 6m -1 , 6m +1 return 1
//
//    // 2m
//    // 3m
//    // 4m
//    // return 0
//
//    // 6m -1 = n
//    // 6m = n+1
//    long long int n;
//    cin >> n;
//    if (n <= 3)
//        return n == 2 || n == 3;
//    else for(long long int i = 6; i <= n/i ; i+= 6)
//            {
//                if((n%(i+1) == 0) or (n%(i-1) ==0))
//                    return 0;
//            }
//
//    return 1;
//}
bool solve()
{
    unsigned long int n;
    cin >> n;
        if (n <= 3)
        return (n == 2 || n == 3);
        if (n%2 == 0 or n%3 == 0)return 0;
            for (unsigned int i =3; i<=n/i ; i+=2 )
                {
                    if(n%i==0)
                        return 0;
                }
            return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    short t;
    cin >> t;
    while(t--)
        {
            cout << (solve() ?  "Yes" : "No");
            cout << '\n';
        }
}
