#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> v;
int main()
{
    int i , j;
    int x;
    cin >> n;
    for(int i=0; i<n ; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector<int>::iterator it;
    for(it = v.begin(); it!= v.end();it++){
		cout << *it <<endl;
	}

	cout << "Auto\n";

}
