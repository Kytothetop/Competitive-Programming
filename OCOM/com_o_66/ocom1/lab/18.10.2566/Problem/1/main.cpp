#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum =0;
    for(int i =0; i < n-1; i++)
        {
        	int temp;
        	cin >> temp;
			sum+= temp;
        }
	cout << n*(n+1)/2 - sum;

}
