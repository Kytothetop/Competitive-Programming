#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z;
	cin >> x >> y >> z;
	pair<int,int> arr[y];
	int brr[x] = {0};
//	memset(arr, 0, n*sizeof(arr[0]));
	for (int i =0;i <y ;i++ )
	{
//		int temp1,temp2;
		cin >> arr[i].first >> arr[i].second;


	}
	for (int i =0;i<z ;i++ )
	{
		int question;
		cin >> question;
		for(int j = arr[question-1].first -1; j < arr[question-1].second ; j++)
			brr[j]++;
	}
//	for (auto &e: arr)
//	{
//		cout << e.first << ' ' << e.second;
//		cout << '\n';
//	}
	for (int i =0;i < x; i++)
	{
		cout << brr[i];
		if(i<x-1)cout << '\n';
	}





//    int x,y,z;
//	cin >> x >> y >> z;
//	int arr[y][x], brr[x];
////	memset(arr, 0, n*sizeof(arr[0]));
//	for (int i =0;i <y ;i++ )
//	{
//		int temp1,temp2;
//		cin >> temp1 >> temp2;
//		for (int j = temp1-1; j < temp2 ;j++ )
//		{
//			arr[i][j]++;
//		}
//	}
//	for (int i =0;i<z ;i++ )
//	{
//		int temp;
//		brr[x]
//	}

}
