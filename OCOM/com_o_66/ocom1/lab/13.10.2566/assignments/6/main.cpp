#include <bits/stdc++.h>
using namespace std;
int n;
string x;
// xyz
// z zy zzyx

// 12 34
// 4 43 443- 443443-2
void func(string str, int i= 0)
{

	cout << x + str.substr(1,i);

	if(i<n)func(str, i+1);

}
int main() {
    string str;
    getline(cin, str);
    n = str.length();
	reverse(str.begin(),str.end());


	x = str[0];
	func(str);
    return 0;
}
