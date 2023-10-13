#include <iostream>

using namespace std;

// Use Ctrl + Z (^Z) to terminate program

int main()
{
    char c;
    string s;
    while(cin >> c)
    {
        s += c;
        cout << c << ' ';
    }
    cout << '\n' << s;
}
