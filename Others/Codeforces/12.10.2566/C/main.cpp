#include <iostream>

using namespace std;
int cal()
{
    int cnt =0;
    int n;
    cin >> n;
    char arr[n][n],brr[n][n];
    for (int i =0; i<n ; i++ )
        {
            for (int j =0; j<n ; j++ )
                {
                    cin >> arr[i][j];
                    brr[i][j] = arr[i][j];
                }
        }
    /*
    n = 4
    0 1 2 3
    0 1

    abba
    bcbb
    bccb
    abba
    */

    for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
                swap(brr[i][j], brr[j][i]);
        }


    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n/2; j++)
                {
                    swap(brr[i][j], brr[i][n-j-1]);
                }
        }


    for (int i =0; i<(n/2) ; i++ )
        {
            for (int j =0; j<(n/2) ; j++ )
                {
                    while(arr[i][j] < brr[i][j])
                        {
                            cnt++;
                            arr[i][j]++;
                        }
                    while(arr[i][j] > brr[i][j])
                        {
                            cnt++;
                            arr[i][j]--;
                        }
                }
        }

    for(auto &e : arr)
        {
            for(auto &j : e)
                {
                    cout << j << ' ';
                }
            cout << '\n';
        }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        {
            cout << cal() << '\n';
        }
}

