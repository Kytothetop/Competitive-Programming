#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    int arr[125];
    for (int i = 1; i <= 125 ; i++)
        {
            arr[i-1] = i*8;
        }
    while(t--)
        {
            string str;
            int n;
            cin >> n >> str;
            string sub,pre;
            if(n>4)
                {
                    sub = str.substr(n-4,4);
                }
            else
                sub = str;
//	    cout << sub;
            int x = stoi(sub);
            int d1,d2,d3;
            if()
//            int y = x;
//            while(y%8 != 0)
//                {
//                    y++;
//                }
//            if(y%8 != 0)
//			{
//				y = x;
//				while(y%8 != 0)
//                {
//                    y++;
//                }
//			}
//            if(x%8==0)
				cout << x<< '\n';
        }
    return 0;
}
