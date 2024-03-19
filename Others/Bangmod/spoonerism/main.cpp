#include <iostream>

using namespace std;

char vo[] = {'a','e','i','o','u'};

int main()
{
    double inn;
    cin >> inn;
    if(inn - floor(inn) != 0)
        {
            cout << "error";
            return 0;
        }

    int n;
    string arr[n];
    for(int i =0; i < n ; i++)
        {
            cin >> arr[i];
            string s = arr[i];
            for (int i = 0; i < s.size(); i++)
                {

                    if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a'
                            || s[i] > 'z')
                        {
                            s.erase(i, 1);
                            i--;
                        }
                }
            for (auto& x : s)
                {
                    x = tolower(x);
                }

        }
    if(n < 1)
        if(n == 1)cout << arr[0];


}
