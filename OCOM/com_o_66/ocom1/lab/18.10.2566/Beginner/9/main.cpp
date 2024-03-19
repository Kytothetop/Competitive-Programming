#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x;
    cin >> x;
    switch (x)
    {
    case INT_MIN ... -1:
    	cout << 0;
    	break;
    case 0 ... 10:
    	cout << pow(x,2) + 2*x + 1;
    	break;
    case 11 ... 100:
    	cout << pow(x,3) + pow(x,2) + x + 1;
    	break;

    default:
    	cout << 2000000;
    	break;
    }

}
