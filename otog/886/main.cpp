#include <bits/stdc++.h>
//#include "admin.h"

using namespace std;
//unordered_multiset<int> ddset;
multiset<int> ddset;

bool usePakpim(int x)
{
	bool e = ddset.find(x) == ddset.end();
    ddset.insert(x);
    if(e)
	{
		return false;
	}

	return true;
}
int usePeteza()
{
    if(ddset.empty())
	{
		return INT_MAX;
	}
//	auto itr = max_element(ddset.begin(),ddset.end());
	auto itr = ddset.end();
	itr--;
	int p = *itr;
    ddset.erase(itr);
    return p;
}
int useBlackslex()
{
    if(ddset.empty())
	{
		return INT_MIN;
	}
//    auto itr = min_element(ddset.begin(),ddset.end());
    auto itr = ddset.begin();
    int p = *itr;
    ddset.erase(itr);
    return p;
}
//int main()
//{
//	cout << usePakpim(10) << '\n';
//	cout << usePakpim(10) << '\n';
//	cout << usePakpim(43) << '\n';
//	cout << useBlackslex() << '\n' <<
//	 usePeteza() << '\n'
//	 << useBlackslex() << '\n'<< useBlackslex()	;
//}
