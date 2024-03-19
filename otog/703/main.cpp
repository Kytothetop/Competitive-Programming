#include <iostream>

using namespace std;

int main()
{
    int n,cnt =0;
    cin >> n;
	bool arr[n] = {0};
	for (int i =0;i <n ;i++ )
	{
		char c;
		cin >> c;
		switch (c)
		{
		case '0':
			arr[i] = 0;
			break;
		case '1':
			arr[i] = 1;
			break;

		default:
			break;
		}

	}
	for(int i = n-1 ; i >= 0 ; i--)
	{
		if((i != 0 and arr[i] != arr[i-1]) || (i == 0 and (arr[i] == 0 ) ))
		{
			cnt++;
			arr[i] = not arr[i];
		}
//		cout << (arr[i] ? "y" : "n");
	}
//	cout << '\n';
//	for(auto e : arr)cout << e;
//	cout << '\n';
	cout << cnt;
}
