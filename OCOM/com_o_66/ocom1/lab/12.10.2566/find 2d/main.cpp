#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout << "Row Column:\n";
    cin >> r >> c;

    int arr[r][c];
    cout << "Matrix:\n";
    for (int i = 0; i < r ; i++ )
        {
            for (int j = 0; j < c ; j++ )
                {
                    cin >> arr[i][j];
                }
        }
    cout << "Find: ";
    int f;
    bool flg = false;
    cin >> f;
    for (int i = 0; i < r ; i++ )
        {
            for (int j = 0; j < c ; j++ )
                {
                    if(f == arr[i][j])
                        {
                            flg = 1;
                            cout << "Found at (" << i+1 << " , " << j+1 << ").\n";
                        }
                }
        }
    if(!flg)cout << "Not Found! Skill issue bruh.";
    else cout << "Note: Not index indicator.";
    return 0;
}
