#include <iostream>
using namespace std;
#define lli long long int
lli ori;
void b(lli h, lli m)
{
    cout << h << ' ';
    if(h < ori)
        {
            b(h+m,m);
            return;
        }
}
void a(lli h, lli m)
{
    cout << h << ' ';
    if(h > m)
        {
            a(h-m,m);
            return;
        }
    else
        {
            if(h ==m)cout << "0 ";
            cout << "PULL ";
            if(h ==m)cout << "0 ";
            b(h,m);
            return;
        }
}
int main()
{
    lli h,m;
    cin >> h >> m;
    if(h < m)
        {
            cout << "PULL";
            return 0;
        }
    ori = h;
    a(h,m);

}
