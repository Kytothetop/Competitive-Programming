#include <bits/stdc++.h>

using namespace std;
// Parrarell then cross =0
bool parr(double A[], double B[])
{
    // Find A X B
    double par =
				(A[1] * B[2] - A[2] * B[1])
              * (A[1] * B[2] - A[2] * B[1])
              + (A[0] * B[2] - B[0] * A[2])
              * (A[0] * B[2] - B[0] * A[2])
              + (A[0] * B[1] - A[1] * B[0])
              * (A[0] * B[1] - A[1] * B[0]);
    if (par == 0)
        {
            return 1;
        }

    else
        {
            return 0;
        }
}
float magn(int x, int y, int z)
{
    int sum = x * x + y * y + z * z;
    return sqrt(sum);
}

int main()
{
    int n;
    cin >> n;
    int dim = n;
    double arr[n][3];
    for (int i =0; i<n ; i++ )
        {
            for(int j =0; j<3; j++)
                cin >> arr[i][j];
        }
    for (int i =0; i<n ; i++ )
        {
            for(int j =0; j<3; j++)
                arr[i][j] /= magn(arr[i][0],arr[i][1],arr[i][2]);
        }

//	cout << parr(arr[1],arr[2]);
    for (int i =0; i<n-1 ; i++ )
        {
            for(int j =i+1; j < n; j++)
                {
//                    if(parr(arr[i],arr[j]))
//                        dim--;
					if(arr[i][0] == arr[j][0] and arr[i][1] == arr[j][1] and arr[i][2] == arr[j][2])
						dim--;
                }
        }
	cout << dim-1;
}
