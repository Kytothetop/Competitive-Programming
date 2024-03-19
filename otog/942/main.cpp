#include <bits/stdc++.h>

using namespace std;


int GetIndex(set<double> S, double K)
{
    int Index = 0;
    for (auto u : S)
        {

            if (u == K)
                return Index;

            Index++;
        }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // -1 0 1 2 3 4


    int n,command;
    double k;
    cin >> n >> command;
//    set<int> st;
//	for(int i =0; i < n;i++)
//	{
//		st.insert(i-1);
//	}

    vector<int> arr(n);
    vector<double> cus_ind; // custom index
    for(int i =0; i<n; i++)cus_ind.push_back(i-1);
    map<double, int> convert;  // custom to normal index
//    double mxindex = -999;
    while(command--)
        {
            string s;
            cin >> s;
            if(s[0] == 'i')
                {
                    // get k
                    double v;
                    cin >> k >> v;
                    if(k > n - 2)
                        {
                            cout << "error\n";
                            continue;
                        }
                    // 0 0 0
                    //



                    // -1  0 0.69 1
                    //  0 -1   4  2
                    int d = 696969;
//                    auto itr = cus_ind.find(k);
                    auto itr = find(cus_ind.begin(),cus_ind.end(),k);
                    if(itr != cus_ind.end()) // If found
                        {
                            d = distance(cus_ind.begin(),itr); // d = real index k = custom index
//                            cout << "\nReplace: " << arr[d] << " at " << k << ':' << d << " with " <<v;
                            arr[d] = v;
                        }
                    else
                        {

                            d = distance(cus_ind.begin(),lower_bound(cus_ind.begin(),cus_ind.end(),k));
                            arr.emplace(arr.begin() + d, v);
//							cus_ind.insert(k);
                            cus_ind.push_back(k);
                            sort(cus_ind.begin(),cus_ind.end());
                            convert.insert(make_pair(k,d));

                        }

//                            cout << "\nCustom index: " << k << " Real: " << d << " Value " << v <<'\n';
//                    for(auto &e : arr)
//                        cout << e << ' ';
//                    cout << '\n';














                    continue;
                }


            // pa and pi

            if(s[1] == 'a')
                {
                    for(auto &e : arr)
                        cout << e << ' ';
                    cout << '\n';
                }
            if(s[1] == 'i')
                {
                    cin >>k;
                    if(k > n - 2)
						{cout << "error\n";
						continue;}
                    if(find(cus_ind.begin(),cus_ind.end(),k) == cus_ind.end())
					{
						cout << 0 << '\n';
						continue;
					}
                    int d = distance(cus_ind.begin(), find(cus_ind.begin(),cus_ind.end(),k)  );
//                    cout << "\nCustom index: " << k << " Real: " << d << " Value ";
                    cout << arr[d] << '\n';
//                    for(auto &e : arr)
//                        cout << e << ' ';
//                    cout << '\n';
                }



        }
}
