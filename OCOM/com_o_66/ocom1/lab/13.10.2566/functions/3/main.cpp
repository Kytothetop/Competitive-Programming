#include <iostream>

using namespace std;
int cnt1 = 0, cnt2 = 0;
void func(string s)
{
	if(s == "Mercury" || s == "Venus")
		cnt1++;
	else cnt2++;
}
int main()
{
	string str;
    while(cin >> str)func(str);
    cout << "\nInferior Planets = " << cnt1;
    cout << "\nSuperior Planets = " << cnt2;

    return 0;
}
