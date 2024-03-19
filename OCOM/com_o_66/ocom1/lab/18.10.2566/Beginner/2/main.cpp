#include <iostream>

using namespace std;

int main()
{
    int x,y; cin >> x >> y;
    if(x == y)
	{
		cout << "ZERO";
		return 0;
	}

    for (int i =0;i<(x-y) ;i++ )
    {
		cout << '*';
    }
}
