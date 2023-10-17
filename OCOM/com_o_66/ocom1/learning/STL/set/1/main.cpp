#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int,greater<int>> s = {56,67,101,52,45};
    for(auto e : s)
		cout << e << ' ';

	cout << '\n';

	for(auto e = s.rbegin(); e != s.rend(); e++)
		cout << *e << ' ';
	cout << '\n';
	for(int i =0; i < 10; i++)
		s.insert(20+i*2);
    for(auto e : s)
		cout << e << ' ';
		cout <<'\n' << s.size();
}
