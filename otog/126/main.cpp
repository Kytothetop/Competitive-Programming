#include <iostream>

using namespace std;

int main()
{
	int n,m,k;
	int x,y; //From
	int a,b; //To
    cin >> n >> m >> k;
    char arr[4][3];
	for(int i =0; i < n; i++)
	{
		for(int j =0; j < m ; j++)
		{
			char temp;
			cin >> temp;
			arr[i][j] = temp;
			if(temp == 'A')
			{
				x = i;
				y = j;
			}
			else if(temp == 'B')
			{
				a = i;
				b = j;
			}
		}
	}
	for(int i = x
		//See Kraken problem)

}
