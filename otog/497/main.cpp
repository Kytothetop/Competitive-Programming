#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    for (int j =0; j<n ; j++ )cout << '*'; cout << '\n';
    for (int i =1; i<n ; i++ )
        {
            for (int j =0; j<n ; j++ )
                {
                    if(j == 0 or j == n-1)
                        cout << '*';
                    else if(i%2 == 1 or j%2==1)
                        cout << '-';
                    else cout << '*';
                }
            cout << '\n';
        }
    for (int j =0; j<n ; j++ )cout << '*';
}
