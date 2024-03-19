#include <bits/stdc++.h>
/*
7
20000
101
5200
203
4300
123
197
4
400
197
4300
5200
*/
using namespace std;

int main()
{
    int n;
    cin >> n;
//    vector<int> arr;
    set<int> arr;
    for (int i =0;i<n ;i++ )
    {
    	int temp;
    	cin >> temp;
    	arr.insert(temp);
//    	arr.push_back(temp);
    }
    int m;
    cin >> m;
    int odd =0, even = 0;
    for (int i =0;i<m ;i++ )
	{
		int key;
		cin >> key;
		if(arr.find(key) != arr.end())
//		if(find(arr.begin(),arr.end(),key) != arr.end())
		{
			if(key % 2 == 1)
				odd++;
			else
				even++;
		}
	}
	cout << odd+even << ' ' << odd <<  ' ' << even;


}
