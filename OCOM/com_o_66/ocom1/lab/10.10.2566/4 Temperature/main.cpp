#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case INT_MIN ... 10:
    	cout << "cold";
    	break;
    case 11 ... 20:
    	cout << "fine";
    	break;
    case 21 ... 30:
    	cout << "warm";
    	break;
    case 31 ... INT_MAX:
    	cout << "hot";
    	break;

    default:
    	break;
    }

}
