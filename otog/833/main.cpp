#include <bits/stdc++.h>

using namespace std;
string Morse[] = {".-", "-...", "-.-.", "-..",".", "..-.", "--.", "....", "..", ".---",
                        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                        "..-", "...-", ".--", "-..-", "-.--", "--.."};
void func(string str)
{
    stringstream s(str);

    string word;

    while (s >> word)
        {
            auto itr = find(Morse, Morse + 26,word);
            cout << char('a' + distance(Morse, itr));
        }
}
int main()
{
    string str;
    getline(cin, str);
    func(str);
}
