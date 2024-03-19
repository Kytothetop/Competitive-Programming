#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> arr;
    for (int i =0; i < n ; i++ )
        {
            string temp;
            cin >> temp;
            arr.push_back(temp);
        }
//    cout << *arr.begin() << ' ' << *(arr.end()-1) << '\n';
    for (auto e : arr)
	{
		cout << e << '\n';
	}
	for(auto itr = arr.begin(); itr != arr.end() ; itr++)
		cout << *itr << ' ';

    for (auto e : arr)
        {
            cout << "\nLength " << e << " is " << e.length()
				 << "\nSubstr(2): " << e.substr(2);
        }
    return 0;
}
