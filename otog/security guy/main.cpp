#include <iostream>

using namespace std;

int main()
{
    int y,x,q,gx,gy;
    cin >> y >> x >> q;
    char pos[y][x];
	for(int i=0; i<y; i++){
		for(int j=0; j<x ; j++){
            cin >> pos[i][j];
		}}

    for(int i=0; i<q; i++){
        cin >> gy >> gx;
        cout << pos[gy][gx] << endl;}

    return 0;
}
