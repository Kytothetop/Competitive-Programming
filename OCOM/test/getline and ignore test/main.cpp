#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cout << "Enter a string with spaces: ";

    cout << "Enter a string with spaces: ";
    getline(cin, input);
    cout << "You entered: " << input << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '&');
    getline(cin, input);
    cout << "You entered: " << input << endl;


    return 0;
}
