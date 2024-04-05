#include <iostream>
#include <vector>

using namespace std;
    int n;
vector<string> arr;
void sol()
{
	vector<bool> ex(arr.size(),true);
	int now = 0;
	string cmd;
	n = 2*n-1;
	cin >> cmd; // SHIFT obviously
	for(int ijk =1; ijk < n ; ijk++)
	{
		cin >> cmd;

		switch (cmd[0])
		{
		case 'S':
			now++;
			break;
		case 'R':
			ex[now-2] = false;
			break;
		case 'L':
			ex[now-1] = false;
			break;

		default:
			break;
		}

	}
	int idx = lower_bound(ex.begin(), ex.end() , true) - ex.begin();
	cout << arr[idx];
}
int main()
{
    cin >> n;
    for(int i =0; i < n; i++)
	{
		string tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	sol();
}
