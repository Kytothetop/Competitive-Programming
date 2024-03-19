#include <bits/stdc++.h>

using namespace std;
struct team
{
    string name;
    int score;
    bool operator<(const team& other) const
    {
		return score < other.score;
    }
};

int main()
{
    team t[4];
    for(int i =0; i <4 ; i++)
        cin >> t[i].name;
    int arr[4][4] = {0};
    int w[4] = {0};
    int l[4] = {0};
    for (int i =0; i<4 ; i++ )
        {
            for(int j =0; j<4 ; j++)
                {
                    cin >> arr[i][j];
                }
        }
    for (int i =0; i<4 ; i++ )
        {
            for(int j =0; j<4 ; j++)
                {
                    int my = arr[i][j];
                    int your = arr[j][i];
                    if(my> your)
                        {
                            t[i].score+=3;
                        }
                    else if(my == your)
                        {
                            t[i].score++;
                        }
                }
        }
        sort(t, t + 4);
    for(int i =0; i < 4 ; i++)
        {
            cout << t[i].name << ' ' << t[i].score;
            if(i<3)cout << '\n';
        }
}
