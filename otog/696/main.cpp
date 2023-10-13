#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    set<int> s[n];
    for(int i =0; i < n; i++)
        {
            int p;
            for(int j = 0 ; j < p ; j++)
                {
                    int temp;
                    cin >> temp;
                    s[i].insert(temp);
                }
        }

    for(int i =0; i < m; i++)
        {
            int set1,set2;
            char c;
            cin >> set1 >> c >> set2;

            vector<int> ans;

            switch (c)
                {
                case 'U':
                    set_union( (s[set1]).begin(), (s[set1]).end() , (s[set2]).begin(), (s[set2]).end(), ans);
                    break;
                case '|':
                    set_intersection( s[set1].begin(), s[set1].end(),s[set2].begin(), s[set2].end(), ans);
                    break;
                case '-':
                    break;
                    set_difference( s[set1].begin(), s[set1].end(),s[set2].begin(), s[set2].end(), ans);

                default:
                    break;
                }

            for (auto itr = ans.begin(); itr != ans.end(); itr++)
                {
                    cout << *itr
                    if(++itr != ans.end()) cout << " ";
                }
            if(i < m-1)
                cout << '\n';



        }

}
