#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 0 ... 39:
    	cout << 0;
    	break;
    case 40 ... 49:
    	cout << 1;
    	break;
    case 50 ... 59:
    	cout << 2;
    	break;
    case 60 ... 79:
    	cout << 3;
    	break;
    case 80 ... 100:
    	cout << 4;
    	break;

    default:
    	break;
    }

}
