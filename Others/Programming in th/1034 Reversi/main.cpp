#include <iostream>

using namespace std;

int main()
{
    int n = 8;
//    char arr[n][n];
    vector<pair<int,int>> white;
    vector<pair<int,int>> black;
    bool turn = 0; /// 0 Black 1 White
    for (int i =0; i<n ; i++ )
        {
            for (int j =0; j<n ; j++ )
                {
                    char temp;
                    int x,y;
                    cin >> temp >> y;
                    x = temp - 'a';
                    if(!turn)
                        {
                            black.push_back(make_pair(x,y));


                        }
                    else
                        {
                            white.push_back(make_pair(x,y));
                        }

                }
        }
    return 0;
}
