#include <bits/stdc++.h>

using namespace std;
int n1,m1,n2,m2;
void mulMat(vector<vector<int>> mat1, vector<vector<int>> mat2)
{
    int rslt[n1][m2];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < n2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }

            cout << rslt[i][j];
//            if(j < m2-1)
				cout <<' ';
        }

//		if(i < n1-1)
			cout << '\n';
    }
}

int main()
{

	char temp;


	cin >> n1 >> temp >> m1;
	vector<vector<int>> arr( n1 , vector<int> (m1));
	for (int i =0; i <n1 ;i++ )
	{
		for (int j =0;j<m1 ;j++ )
		{
			cin >> arr[i][j] >> temp;
		}
		cin >> temp;
	}
	cin >> temp;


	cin >> n2 >> temp >> m2;
	vector<vector<int>> brr( n2 , vector<int> (m2));
	for (int i =0; i <n2 ;i++ )
	{
		for (int j =0;j<m2 ;j++ )
		{
			cin >> brr[i][j] >> temp;
//			cout << a << ' ' << b;
		}
		cin >> temp;
	}
	cin >> temp;

	mulMat(arr,brr);


}
