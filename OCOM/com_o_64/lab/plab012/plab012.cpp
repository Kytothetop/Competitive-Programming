#include <iostream>
#include <vector>
#include <cstring>
/*
Task    :   plab012
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int main()
{
    int num;
    vector<int> result;

    cin >> num;
    int x[num];

    for(int j=0; j<num; j++)
        {
            cin >> x[j];
            if(x[j]<0)
                {
                    x[j] *= -1;
                }
            if(isPrime(x[j]))
                {
                    result.push_back(x[j]);
                }
        }
    cout << result.size();
    for(int j=0; j<result.size(); j++)
    {cout << '\n' << result[j];}
}
