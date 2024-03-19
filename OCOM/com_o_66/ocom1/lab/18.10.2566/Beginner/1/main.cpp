#include <iostream>

using namespace std;

int main()
{
    int sumE = 0, sumO = 0;
    while(true)
	{
		int temp;cin >> temp;
		if(temp == 0)
			break;
		else if(temp %2 ==0)
			sumE+= temp;
		else if(temp %2 ==1)
			sumO+= temp;

	}
	cout << sumE << ' '<< sumO;
}
