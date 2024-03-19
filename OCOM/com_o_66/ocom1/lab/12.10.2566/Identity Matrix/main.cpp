#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    bool Iden = true;
    int arr[r][c];
    for (int y = 0; y< r ; y++ )
        {
            for (int x = 0; x< c ; x++ )
                {
                    cin >> arr[y][x];
                    if((arr[y][x] == 0 and (y == x)) or (arr[y][x] == 1 and (y != x)))
                        Iden = false;
                }
        }
    cout << (Iden ? "This matrix is an identity matrix." : "This matrix is not an identity matrix.");
}
