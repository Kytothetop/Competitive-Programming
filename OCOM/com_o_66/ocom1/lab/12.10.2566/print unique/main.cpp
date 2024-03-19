#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
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
				break;
			}
		}
		if(!flg)brr.push_back(arr[i]);
	}

    for(auto &e : brr) cout << e << ' ';
}
