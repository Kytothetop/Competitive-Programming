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
	cout << "\nS1 Before: ";
    for (auto e : s1)
    {
    	cout << e << ' ';
    }
	cout << "\nS2 Before: ";
    for (auto e : s2)
    {
    	cout << e << ' ';
    }
    swap(s1,s2);
	cout << "\nS1 After: ";
    for (auto e : s1)
    {
    	cout << e << ' ';
    }
	cout << "\nS2 After: ";
    for (auto e : s2)
    {
    	cout << e << ' ';
    }
}
