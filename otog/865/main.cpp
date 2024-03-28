#include <iostream>
#include <math.h>
/*
Testcase 1
Input:
4 4 1 4
1 1
1
2
3
4

Output:
1
6
17
32

Testcase 2
Input:
4 3 5 3
1 2
3 0
3 1
0 0
2 0
3
5
6

Output:
18
44
56

*/
using namespace std;
using pii = pair<int,int>;
    int n, m , k ,q;
inline int tersect(int tri1, int tri2)
{
	// plus (triangle intersect) : x = min(tri1-1,tri2-1)
	// plus area -> x*(x+1)/2
//	if(tri1 <= 1 or tri2 <= 1)
//		return 0;
	int tt = min(tri1-1,tri2-1);
	return (tt*(tt+1))/2;

}
int cal(int day,int x , int y)
{
	// Think
	// BFS each fish
	// If copies of fish(i) is full pond then + NxM
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k >> q;
    int arr[k]; int brr[k];
    for(int i =0; i < k ; i++)
	{
		cin >> arr[i] >> brr[i];
	}
    while(q--)
	{
		int smm = 0;
		int temp;
		cin >> temp;
		for(int j =0; j < k; j++)
			smm += cal(temp-j, arr[j], brr[j]);
		cout << smm << '\n';
	}






}
