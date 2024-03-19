#include <iostream>

using namespace std;
/*
50.34
35.40
23.00
145.23
35.245
24.56
*/
int main()
{
    double mn = 99999999999999,mx = -99999999999999, sum = 0;
    int cnt = 0;
    while(true)
	{
		int temp;cin >> temp;
		if(temp == 0)
			break;
		if(temp > mx)mx = temp;
		if(temp < mn)mn = temp;
		sum += temp;
		cnt++;
	}
	cout << mn << '\n'<< mx << '\n' << sum/cnt;
}
