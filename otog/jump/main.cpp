#include <iostream>
using namespace std;
float h=0,m=0,h2;
void up()
{
    if(h2>=(h+m))
        {
            cout << ' ' << h;
            h+=m;
            up();
        }
}
void down()
{
    h-=m;
    cout << h;
    if(h>=m)
        {
            cout << ' ';
            down();
        }
    else
        cout << ' ' << "PULL";
    up();
}



int main()
{
    cin >> h >> m;
    h2 = h;
    cout << h << ' ';
    down();
    cout << ' ' << h2;
}
