#include <iostream>

using namespace std;

int main()
{
    int n, total = 0;
    cin >> n;

    for (int i =1; i<=n ; i++ )
        {
            for (int j = 1; j<=i ; j++ )
                {
                    if((i != 1 and i!= n) and (j!=1 and j!=i))
                        {
                            total+=j;
//                            cout <<'a';
                        }
                    cout << j << ' ';
                }
//            cout << ((i<n) ? '\n' : '\0');
            cout << '\n';
        }
    cout << total;
}
