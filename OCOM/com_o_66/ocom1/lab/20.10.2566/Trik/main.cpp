#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3] = {0};
    a[0] = 1;
    string str;
	cin >> str;
	for (auto c : str)
	{
		switch (c)
		{
		case 'A':
			swap(a[0],a[1]);
			break;
		case 'B':
			swap(a[2],a[1]);
			break;
		case 'C':
			swap(a[0],a[2]);
			break;


		default:
			break;
		}
	}
	for(int i = 0; i < 3 ; i++)
	{
		if(a[i] == 1)cout << i+1;
	}
}
