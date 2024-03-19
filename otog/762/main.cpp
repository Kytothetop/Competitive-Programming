#include <bits/stdc++.h>

using namespace std;
/*
testcase input:
2
3 3
0 1
1 2
0 2

4 2
0 1
2 3
output:
same
not same
*/
inline void sol()
{
    int n, m;
    bool flg =false;
    cin >> n >> m;
    vector<int> arr(n,-1);
//    memset(arr,-1,n);

    for(int i =0; i < m ; i++)
        {
            int temp1, temp2;
            cin >> temp1 >> temp2;

            if(arr[temp1] == -1 and arr[temp2] == -1)
			{
				arr[temp1] = 0;
				arr[temp2] = 1;
			}

			else if(arr[temp1] == -1)
			{
				arr[temp1] = 1 - arr[temp2];
			}

			else if(arr[temp2] == -1)
			{
				arr[temp2] = 1 - arr[temp1];
			}

			else if(arr[temp1] == arr[temp2])
			{
				cout << "Gay found!";
				return;
			}
        }
    cout << "Gay not found!";
    return;
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
            if(t > 0)
				cout << '\n';
        }
}
