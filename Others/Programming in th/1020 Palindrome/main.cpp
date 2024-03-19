#include <bits/stdc++.h>

using namespace std;
bool check(string s, string c)
{
    auto str = s.begin();
    auto ctr = c.rbegin();
    while(str != s.end())
        {
            char a = *str;
            char b = *ctr;


			if(
				(char)tolower(a) != (char)tolower(b)

			)
				return 0;
            str++;
            ctr++;
        }
    return 1;
}
bool palin(string str)
{
	int n = str.length();
	int l;
	if(n%2 == 1) l = (n-1)/2;
	else l = n/2;
	// n = 8 // 0 1 2 3 4 5 6 7	// l = 4
	// n = 7 // 0 1 2 3 4 5 6	// l = 3
	return (check(str.substr(0,l) , str.substr(n-l,l)));
}
int main()
{
//    cout << check("aBc","cbA");
//cout << (char)tolower('a');
	string str;
	getline(cin , str);
	if(palin(str))
	{
		int n = str.length();
	int l;
	if(n%2 == 1) l = (n-1)/2;
	else l = n/2;
		if((palin(str.substr(0,l  )))
		and(palin(str.substr(n-l,l))))
		cout << "Double Palindrome";
		else cout << "Palindrome";
	}
	else cout << "No";
    return 0;
}
