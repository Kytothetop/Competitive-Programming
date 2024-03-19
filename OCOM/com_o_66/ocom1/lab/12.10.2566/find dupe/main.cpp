#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int cnt =0;
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n ; i++ )
        {
            cin >> arr[i];
        }




    vector<int> brr;
    for (int i =0; i<n ; i++)
	{
		bool flg = false;
		for (auto &e : brr)
		{
			if(e == arr[i])
			{
				flg = 1;
				cnt++;
				break;
			}
		}
		if(!flg)brr.push_back(arr[i]);
	}
	cout << cnt;
//    for(auto &e : brr)cout << e << ' ';
}
