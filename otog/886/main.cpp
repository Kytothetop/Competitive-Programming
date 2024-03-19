#include <bits/stdc++.h>
#include "admin.h"

using namespace std;
//unordered_multiset<int> data;
multiset<int> data;

bool usePakpim(int x)
{
	bool e = data.find(x) == data.end();
    data.insert(x);
    if(e)
	{
		return false;
	}

	return true;
}
int usePeteza()
{
    if(data.empty())
	{
		return INT_MAX;
	}
//	auto itr = max_element(data.begin(),data.end());
	auto itr = data.end();
	itr--;
	int p = *itr;
    data.erase(itr);
    return p;
}
int useBlackslex()
{
    if(data.empty())
	{
		return INT_MIN;
	}
//    auto itr = min_element(data.begin(),data.end());
    auto itr = data.begin();
    int p = *itr;
    data.erase(itr);
    return p;
}
