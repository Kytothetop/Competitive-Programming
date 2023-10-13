#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
	cin >> str;
	for (auto & c: str) c = toupper(c);
	cout << str;
}
