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
    set<int> s;
    for(int i =0; i < 10; i++)
        {
            s.insert(num());
        }
    for(auto &e : s)
        {
            cout << e << '\n';
        }
    set<char> c;
    for(int i =0; i < 13; i++)
        {
            c.insert('a' + num(26));
        }
    for(auto &e : c)
        {
            cout << e << '\n';
        }

    set<string> str;
    for (int i = 0; i < 30; i++) {
        string ss; // Create a new string for each iteration
        for (int j = 0; j < num(c.size()+1); j++) { // Loop random times to populate string ss
            auto it = c.begin();
            advance(it, num(c.size()));
            ss += *it; // Append *it to ss
        }
        str.insert(ss); // Insert ss into the set
    }
    for (auto &e : str) {
        cout << e << '\n';
    }

}
