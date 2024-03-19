#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
3
Mark 50
Jack 80
Man 60
Jack
 */

int     n;
string  na[105];
int     sc[105];
string  s;

int main()
{
    int     i,j;
    string  x;
    int     y;

    cin >>  n;
    for(i = 0;i<n;i++){
        cin >>  x   >>  y;
        na[i]   =   x;
        sc[i]   =   y;
    }

    /**
    for(i = 0;i<n;i++){
        cout << na[i] << ' ' << sc[i] << endl;
    }
    */

    int flg=0;
    cin >>  s;
    for(i = 0;i<n;i++){
        if(na[i]==s){
            cout << "found i = " << i << " : " << na[i] << " score = " << sc[i] << endl;
            flg=1;
            break;
        }
    }
    if(flg==0){
        cout << "* not found *" << endl;
    }
    return 0;
}
