#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> i = {1,3,4,5,6};
    set<int> g = {1,2,3,4,5};
    auto gtr = g.begin();
    auto itr = i.begin();
    while(itr != i.end())
	{
		if(*itr == *(gtr))
		{
			cout << *itr << " Equal " << *gtr << '\n';
		}
		itr++;
		gtr++;
	}


}
