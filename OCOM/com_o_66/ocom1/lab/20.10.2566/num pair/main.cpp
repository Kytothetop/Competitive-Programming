#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> uniq;
    vector<vector<int>> ind;
    for (int i =0; i<n ; i++ )
        {
        	double temp;
            cin >> temp;
            auto it = find(uniq.begin(),uniq.end(),temp);
            if(it != uniq.end())
                {
                }
            else
                {
                	uniq.push_back(arr[i]);
                	ind.push_back()
                }
        }
}
