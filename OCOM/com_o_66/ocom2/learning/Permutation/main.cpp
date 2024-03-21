#include <bits/stdc++.h>

using namespace std;
int num(int lim = 1000)
{
    return rand()%lim;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    srand(time(NULL));
//    vector<int> s;
//    for(int i =0; i < 10; i++)
//        {
//            s.push_back(num());
//        }
//    for(auto &e : s)cout << e << '\n';
	vector<char> c;
    for(int i =0; i < 6; i++)
        {
            c.push_back('a' + num(26));
        }
    for(auto &e : c)cout << e;
	sort(c.begin(),c.end());
//	cout << '\n';
	int cnt =0;
    for(auto &e : c)cout << e;
    do
    {
    	cnt++;
    	cout << "\nCase:\t" << cnt << "\t-> ";
		for(auto &e : c)cout << e;
    } while (next_permutation(c.begin(),c.end()));

}
