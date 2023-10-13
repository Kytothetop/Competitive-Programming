#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
    string str;
    cin >> str;
    for (int i =0; i < str.length(); i++)
        {
            if((i < str.length()-1))
                if((((int(str[i]) - '0')%2 == 1))and(((int(str[i+1]) - '0')%2 == 1)))
                    str.insert(i+1,"-");
        }
    cout << str;
}
