#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a;
    if(a == 0 and b == 0 and c == 0)
        {
            cout << 0 << '\n';
            return;
        }


    while(true)
        {
//            if(b >= 3)
//                {
//            sum += ((floor((double)b))/3);
            sum += (b/3);
            b = b%3;
//                    continue;
//                }
//            else // b: 0 1 2
//                {
            if((b+c) % 3 == 0 or (b+c) >=3 or (b == 0 and c < 3))
                {
                    sum += ((floor((double)b+c))/3);
                    c = (b+c)%3;
                    if(c != 0)
						sum++;
                    cout << sum << '\n';
                    return;
                }
            // c: 0 1 2
            else
            {

                cout << -1 << '\n';
                return;
            }
//                }
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cout << '\n';
    while(t--)
        {
            sol();
        }
}
