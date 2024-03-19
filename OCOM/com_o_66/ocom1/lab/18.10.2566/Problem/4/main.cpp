#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin >> n >> m;
    int arr[n];
    for (int i =0; i<n ; i++ )
        {
            cin >> arr[i];
			if(i>0)
				arr[i] += arr[i-1];
        }
    for (int j =0; j<m ; j++ )
        {
			int temp1,temp2;
			cin >> temp1 >>temp2;
			temp1--;
			temp2--;
			if(temp1 == 0)
				cout << arr[temp2];
			else cout << arr[temp2] - arr[temp1-1];
			// [temp1, temp2]
			if(j<m-1)cout <<'\n';
        }

}
