#include <iostream>

using namespace std;

int main()
{
    int r,c, r2 , c2;
    cin >> r >> c >> r2 >> c2;
    if(r!=r2 or c != c2)
	{
		cout << "These two matrices cannot be compared.";
		return 0;
	}
		cout << "These two matrices can be compared.";
    bool eq = true;
    int arr[r][c], brr[r][c];
    for (int y = 0; y< r ; y++ )
        {
            for (int x = 0; x< c ; x++ )
                {
                    cin >> arr[y][x];
                }
        }
    for (int y = 0; y< r ; y++ )
        {
            for (int x = 0; x< c ; x++ )
                {
                    cin >> brr[y][x];
                    if((arr[y][x] != brr[y][x]))
                        eq = false;
                }
        }
    cout << (eq ? "Two matrices are equal." : "Two matrices are not equal.");
}
