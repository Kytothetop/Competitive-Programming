#include <iostream>

using namespace std;

int main()
{
	double total = 0 ;
    for (int i =0;i<10 ;i++ )
    {
    	double temp;
    	cin >> temp;
    	total += temp;
    }
    cout << total/10;

}
