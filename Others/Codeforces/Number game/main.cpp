#include <iostream>
#include <vector>
#include <algorithm>
#include <alg.h>

using namespace std;

int main()
{
    int n,sum =0;
    cin >> n;
    vector<int> arr;
    for (int i =0 ; i<n ; i++ )
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
    while(arr.size() >= 3)
        {
        	auto ptr = min_element(arr.begin()+1,arr.end()-1);
			while(((*ptr) == *(ptr+1)) && *(ptr+2) > *(ptr-1))
			{
				ptr++;
			}
            arr.erase(ptr);
            sum += (*ptr) + *(ptr-1);
        }
    cout << sum;
}
