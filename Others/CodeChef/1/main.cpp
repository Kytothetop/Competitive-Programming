#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 0 ... 2:
    	cout << "GOLD";
    	break;
    case 3 ... 5:
    	cout << "SILVER";
    	break;
    case 6 ... INT_MAX:
    	cout << "BRONZE";
    	break;

    default:
    	break;
    }

}
