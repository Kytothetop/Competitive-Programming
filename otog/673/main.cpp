#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
    int i;
//    freopen("sssssss.txt","r",stdin);
    while(cin >> i)
    {
        switch (i)
        {
        case 0 ... 49:
            cout << '-' << '\n';
            break;
        default:
            cout << 'P' << '\n';
            break;
        }
    }
    return 0;
}
