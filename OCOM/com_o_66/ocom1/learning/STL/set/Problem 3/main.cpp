#include <bits/stdc++.h>
using namespace std;
/*
5 6
20 30 40 120 80
60 70 80 20 90 100
*/
int main()
{
	#define all(c) c.begin(),c.end()
    int n,m;
//    cout << "Input set S1 size:\n";
    cin >>n;
//    cout << "Input set S2 size:\n";
    cin >>m;
    set<int> s1,s2;
//	cout << "Input S1:\n";
    for (int i =0;i<n ;i++ )
    {
    	int temp;
    	cin >> temp;
    	s1.insert(temp);
    }
//	cout << "Input S2:\n";
    for (int i =0;i<m ;i++ )
    {
    	int temp;
    	cin >> temp;
    	s2.insert(temp);
    }
//	cout << "\nS1: ";
//    for (auto e : s1)
//    {
//    	cout << e << ' ';
//    }
//	cout << "\nS2: ";
//    for (auto e : s2)
//    {
//    	cout << e << ' ';
//    }

    vector<int> s4;

	set_union(all(s1),all(s2),back_inserter(s4));

	cout << s4.size() << '\n' << s4.front() << ' ' << s4.back();

}
