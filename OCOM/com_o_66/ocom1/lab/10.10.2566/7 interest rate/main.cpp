#include <iostream>

using namespace std;

int main()
{
    double n;
    cin >> n;
    if(n > 100000) cout << n * 1.07;
    else if(n > 50000)cout << n * 1.05;
    else if(n > 30000) cout <<n * 1.03;
    else if(n > 10000)cout << n * 1.02;
    else cout << n * 1.005;
}
