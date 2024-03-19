#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,b =0,c=0;
    cin >> n;
    vector<int> brr,crr;
    for (int i =0; i<n ; i++ )
        {
        	int temp;
            cin >> temp;
            if(temp %2 ==0)
			{
				crr.push_back(temp);
			}
			else
				brr.push_back(temp);
        }

        cout << "\nOdd: ";
    for (auto &e: brr) cout << e << ' ';
        cout << "\nEven: ";
    for (auto &e: crr) cout << e << ' ';
}
