#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void sol()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> crr;
    for(int i =0 ; i < n ; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
    sort(arr.begin(), arr.end(),greater<int>());
//	for(int i =0 ; i < n ; i++)
//	{
//		cout << arr[i] << ' ';
//	}
    bool Alc = 1;
    while(not arr.empty())
        {
//            int temp = arr.back();

            if(Alc)
                {
                    crr.push_back(arr.back());
                    Alc = 0;
                }
			else Alc =1;
			arr.pop_back();
        }
//        cout << '\n';
//	for(auto &e : crr)
//	{
//		cout << e << ' ';
//	}
//	cout << '\n';
	int sol = 0;
	for(auto e = crr.begin(); e != crr.end() ; e++)
	{
//		if(*e != sol && (*e != *(e-1) or e != crr.begin() ) )
//		{
//			break;
//		}
//		sol = (*e)+1;


//		if(crr.size() > 1)
//		{
//			if((*e != (*(e+1))-1 and *e != (*(e+1)))  && e+1 != crr.end())
//			{
//				sol = (*e)+1;
//				break;
////				cout << "Yes";
//			}
//			else{sol = (*e)+1;}
//		}
//		else if(*e == 0) sol = 1;
		if(*e <= sol && (*e != *(e-1) or e == crr.begin() ) )
		{
			sol++;
//			cout << sol << ' ';
		}
	}
	// 0 0 1 1 2 2 3 3
	// 0 1 2 3 4 5 6 7
	cout << sol;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        {
            sol();
	cout << '\n';
        }
}
