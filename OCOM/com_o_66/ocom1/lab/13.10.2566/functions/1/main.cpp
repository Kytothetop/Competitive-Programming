#include <iostream>

using namespace std;
void func(int s,int w, int l)
{
    switch (s)
        {
        case 1:
            if(l == w)cout << l*w;
            else cout << "error";
            break;

        case 2:
            if(l != w)cout << l*w;
            else cout << "error";
            break;

        case 3:
            cout << w*l/2;
            break;

        default:
            break;
        }
}
int main()
{
    int s,w,l;
    cin >> s >> w >> l;

    func(s,w,l);
    return 0;
}
