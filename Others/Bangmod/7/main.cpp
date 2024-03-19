#include <bits/stdc++.h>


using namespace std;
bool pal(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {

        if (S[i] != S[S.length() - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {

        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a'
            || s[i] > 'z') {
            s.erase(i, 1);
            i--;
        }
    }
    for (auto& x : s) {
        x = tolower(x);
    }
//    cout << s;
    cout << pal(s);

}
