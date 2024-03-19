#include <iostream>

using namespace std;
long long int n,m;

long long int up(int i =1)
{
    cout << n << " x " << i << " = " << n*i;
    if(i < m)
    {
        cout <<'\n';
        up(i+1);
    }
}

int main() {
    cin >> n >> m;
    up();
    return 0;
}
