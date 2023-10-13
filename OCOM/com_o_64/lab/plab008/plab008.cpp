#include <iostream>
#include <iomanip>
#include <numeric>
/*
Task    :   plab008
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
    int ct =0;
    int n;
    string deven;
    cin >> n;

    int x[n];
    int sum = 0;
    for(int i=0; i<n ; i++){
        cin >> x[i];
        }
    cin >> deven;
    for(int i=0; i<n ; i++){
        if((x[i]%2==1 && deven == "odd")||(x[i]%2==0 && deven == "even"))
        {
            sum += x[i];
            ct += 1;
        }
    }
    cout << sum << ' ' << ct;
    return 0;
}
