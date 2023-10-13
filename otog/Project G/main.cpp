#include <iostream>

using namespace std;
void cal()
{
    int n=0,q=0;
    cin >> n >> q;
            int arr[n] = {0};
            for(int i = 0; i<n ; i++)
                {
                    cin >> arr[i];
                }

            int ih[q] = {0},jh[q] = {0};

            for(int i = 0; i<q ; i++)
                {
                    cin >> ih[i] >> jh[i];
                }
            int sum = 0;
            int prefix[n] = {0};
            for(int i = 0; i < n; i++)
                {
                    sum += arr[i];
                    prefix[i] = sum;
                }



            for(int i = 0; i < q ; i++)
                {
                    if(ih[i])
                        cout << prefix[jh[i]] - prefix[ih[i] - 1] << "\n";
                    else
                        cout << prefix[jh[i]] << "\n";
                }
}
int main()
{
    int t;
    cin >> t;
    cout << '\n';
    for(int wth=0; wth<t ; wth++)
        {
            cal();
            cout << '\n';
        }
}
