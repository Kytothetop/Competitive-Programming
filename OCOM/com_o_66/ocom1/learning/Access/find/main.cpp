#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int arr[n];
    for (int i =0;i<n ;i++ )
    {
    	cin >> arr[i];
    }
    int quest;
    cin >> quest;

    for (int i =0;i<n ;i++ )
	{
		if(quest == arr[i])
			cout << i;
	}
}
