#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    while(true)
	{
		int temp;cin >> temp;
		if(temp == 0)
			break;
		else if(temp %7 ==0)
			sum += temp;

	}
	cout << sum;
}
