#include <bits/stdc++.h>
/*
4
2 4 7 8
5 6 4 1
8 9 2 3
7 6 3 4

*/
using namespace std;
int arr[25][25];
int n;

#define INF (INT_MAX)
//vector<int> heu(int k, int state)
//{
//    vector<int> temp(n,INF);
//    for(int j =0; j < n ; j++)
//        {
//            if(state & (1 << j))continue;
//            for(int i =k+1; i < n ; i++)
//                {
//                    temp[j] = min(temp[j],arr[i][j]);
//                }
//        }
//    return temp;
//}
int recur(int state, int j)			/// i for each position, j for each company
{
    if(state & (1 << j))return 0;			/// If already visited
    state |= (1 << j);						// Mark visited
    int nowval = arr[__builtin_popcount(state) - 1][j];
    if (__builtin_popcount(state) == n)return nowval;			/// If full
    int nowbest = INT_MAX;
    for(int k = 0 ; k < n ; k++)
        {
            if(state & (1 << k))continue;
            nowbest = min(nowbest, nowval + recur(state, k));
//            cout << nowbest << ' ';
        }
//    cout << '\n';
    return nowbest;
}
int main()
{

    cin >> n;
    for(int i =0; i < n ; i++)
        for(int j =0; j < n ; j++)
            {
                cin >> arr[i][j];
            }
    int best = INT_MAX;
    for(int i =0; i < n ; i++){best = min(best,recur(0,i));}
    cout << best;
}
