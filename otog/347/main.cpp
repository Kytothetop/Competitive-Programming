#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    long long int n,m;
    cin >> n >> m;
    long long int arr[n] = {0};
    for(int j =0; j < m; j++)
        {
            char ch;
            cin >> ch;
            switch (ch)
                {
                case 'B':
                {
                    long long int temp1,temp2;
                    cin >> temp1 >> temp2;
                    arr[temp1-1] = temp2;
                }
                break;
                case 'C':
                {
                    int temp;
                    cin >> temp;
                    long long int mx = INT_MIN;
                    for(int i =1; i <= temp; i++)
					{
						mx = max(mx,arr[i-1]);
					}
					cout << mx << '\n';
				}
                break;

                default:
                    break;
                }
        }
    return 0;
}
