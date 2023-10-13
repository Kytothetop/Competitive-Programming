#include <iostream>

using namespace std;

int main()
{
    cout << "Layers:\n";
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++)
        {
            for(int j = i ; j < n ; j++)
                {
                    cout << ' ';
                }
            cout << '/';
            for(int k = 0 ; k < 2 ; k++)
                {
                    for(int j = n-i+1 ; j <= n ; j++)
                        {
                            cout << ' ';
                        }
                }
            cout << char(92) << '\n';
        }
}
