#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> arr(n+1,vector<int> (m+1,0));
    for(int i =0 ; i <= n ; i++)
	{
		for(int j =0 ; j <= m ; j++)
		{
			if(i == 0 or j == 0)arr[i][j]=0;
			else if(s1[i-1] == s2[j-1]) arr[i][j]= arr[i-1][j-1] +1;
			else arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
		}
	}
	cout << arr[n][m] << ' ' << max(n,m);

}
