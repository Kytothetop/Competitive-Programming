#include <iostream>

using namespace std;

int main()
{
    int n = 0;
//	int t = 21;while(t--){
//    n++;
    cin >> n;
    // A B C D E F G
    // 6 7 1 2 3 4 5
    int m = n%7;
	switch (m)
	{
	case 6:
		cout << 'A';
		break;
	case 0:
		cout << 'B';
		break;
	case 1:
		cout << 'C';
		break;
	case 2:
		cout << 'D';
		break;
	case 3:
		cout << 'E';
		break;
	case 4:
		cout << 'F';
		break;
	case 5:
		cout << 'G';
		break;

	default:
		break;
	}
//	}
}
