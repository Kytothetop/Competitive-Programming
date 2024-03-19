#include <bits/stdc++.h>
using namespace std;
int main()
{
	#define all(c) c.begin(),c.end()
    int n,m;
    cout << "Input set S1 size:\n";
    cin >>n;
    set<int> s1,s2;
	cout << "Input S1:\n";
    for (int i =0;i<n ;i++ )
    {
    	int temp;
    	cin >> temp;
    	s1.insert(temp);
    }
    cout << "Input set S2 size:\n";
    cin >>m;
	cout << "Input S2:\n";
    for (int i =0;i<m ;i++ )
    {
    	int temp;
    	cin >> temp;
    	s2.insert(temp);
    }
	cout << "\nS1: ";
    for (auto e : s1)
    {
    	cout << e << ' ';
    }
	cout << "\nS2: ";
    for (auto e : s2)
    {
    	cout << e << ' ';
    }

    vector<int> s3,s4,s5,s6;
	set_intersection(all(s1),all(s2),back_inserter(s3));
	cout << "\nIntersection: ";
    for (auto e : s3)
    {
    	cout << e << ' ';
    }
	set_union(all(s1),all(s2),back_inserter(s4));
	cout << "\nUnion: ";
    for (auto e : s4)
    {
    	cout << e << ' ';
    }
	set_difference(all(s1),all(s2),back_inserter(s5));
	cout << "\nS1 Difference S2: ";
    for (auto e : s5)
    {
    	cout << e << ' ';
    }
	set_difference(all(s1),all(s2),back_inserter(s6));
	cout << "\nS2 Difference S1: ";
    for (auto e : s6)
    {
    	cout << e << ' ';
    }
}
