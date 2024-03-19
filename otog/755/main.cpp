#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	short op[n] = {0};
	queue<char> ch;
	stack<int> undo;

	for(int i =n-1; i >= 0 ; i--)
	{
		char temp,tempC;
		int tempN;
		cin >> temp;
		switch (temp)
		{
		case 'T':
			op[i] = 1;
			cin >> tempC;
			ch.emplace(tempC);
			break;
		case 'U':
			op[i] = 2;
//			cout << i;
			cin >> tempN;
			undo.emplace(tempN);
			break;

		default:
			break;
		}

	}
//	for()
/*
input:
6
T g
T u
T r
U 2
T a
U 2
output:
gur
*/
	vector<char> ans;
	queue<char> test = ch;
//	while(not test.empty())
//	{
//		cout << test.front();
//		test.pop();
//	}
//	cout << '\n';
//	for(auto &e : op)cout << e << ' ';cout << '\n';

	for(int i =0; i < n ; i++)
	{
		char temp = ch.front();
		switch (op[i])
		{
		case 0: // Do nothing(Has been undone)
			break;
		case 1:

			ch.pop();
			ans.push_back(temp);
			break;
		case 2:
			for(int j =0; j < undo.top(); j++)
			{
//				cout << i+j+1 << ' ';
				if(op[i+j+1] == 1)
					ch.pop();
				op[i+j+1] = 0;
			}
			undo.pop();
			break;

		default:
			break;
		}

	}
//	cout << '\n';
//	for(auto &e : op)cout << e<< ' ';
//	cout << '\n';
	for(auto &e:ans)
	{
		cout << e;
	}
}
