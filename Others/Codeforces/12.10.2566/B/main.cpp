#include <bits/stdc++.h>

using namespace std;
bool cal()
{
//	priority_queue <int, vector<int>, greater<int>> arr;
    vector<int> arr;
    for (int i =0; i<3 ; i++ )
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
//    sort(arr.begin(),arr.end());
    for (int i =0; i<3 ; i++ )
        {
    bool same = true;
            sort(arr.begin(),arr.end());
            int temp = arr[arr.size()-1];
            for(auto &e: arr)
                {
                    if(e != arr[arr.size()-1]) same = false;
                }
            if(same)
                {
                    break;
                }
            arr.pop_back();
            int temp2 = temp/(2);
            int temp3 = temp-temp2;
            arr.push_back(temp2);
            arr.push_back(temp3);
            cout << ':';
            for(auto &e: arr)cout << e << ' ';
            cout << '\n';
//            for(aut)


        }
    bool same = 1;
    for(auto &e: arr)
        {
            if(e != arr[arr.size()-1]) same = false;
        }
    if(same)
        {
            return true;
        }
    else
        return false;



}
int main()
{
    int t;
    cin >> t;
    while(t--)
        {
            cout << (cal() ? "Yes" : "No") << '\n';
        }
}
