#include <iostream>

using namespace std;

int main()
{
	string str1 = "abcdefgha", str2 = "abcdefghb";
    cout << str1.compare(str2) << '\n';
    cout << ((str1 == str2) ? "Yes" : "No");
    cout << '\n';
    int in1[] = {1};
    int in2[] = {1};
    cout << ((in1 == in2) ? "Yes" : "No");
}
