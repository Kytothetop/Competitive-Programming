#include <bits/stdc++.h>

using namespace std;
bool conse(vector<int> &v)
{
    for (auto itr = v.begin(); itr!=v.end()-1 ; itr++ )
        {
            if((*itr)+1 != *(itr+1))
                {
                    return false;
                }
        }
    return true;
}
int main()
{
    vector<int> v;
//    int n;
//    cin >> n;
//	for (int i =0;i<n ;i++ )
//	{
		int temp;
//		cin >> temp;
//		v.push_back(temp);
//	}
    while(cin >> temp)v.push_back(temp); // Ctrl + Z to finish
    sort(v.begin(),v.end());
    cout << "Check consecutive numbers in the said vector!: " << (conse(v) ? "True" : "False");

}
