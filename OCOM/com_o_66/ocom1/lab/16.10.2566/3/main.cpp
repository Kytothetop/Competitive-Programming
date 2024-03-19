#include <bits/stdc++.h>

using namespace std;
vector<int> cal(vector<int> &v)
{
	vector<int> vec;
    for (auto itr = v.begin()+1; itr!=v.end()-1 ; itr++ )
        {
            if(*(itr-1) >= *itr and *(itr+1) >= *itr)
                {
                	vec.push_back(*itr);
                }
        }
    return vec;
}
int main()
{
    vector<int> v;
	int temp;
    while(cin >> temp)v.push_back(temp); // Ctrl + Z to finish
    vector<int> vec = cal(v);
    for(auto e : vec)
	{
		cout << e << '\n';
	}


}
