#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++)
        {
            cin >> arr[i];
            if(i>0)
                {
                    while(!(arr[i]>=arr[i-1]))
                        {
                            arr[i]++;
                            cnt++;
                        }
                }
        }
    cout << cnt;

}
