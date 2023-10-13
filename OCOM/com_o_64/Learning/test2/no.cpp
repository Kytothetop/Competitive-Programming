#include <iostream>
#include <iomanip>
/*
Task    :   NumbersIguess
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main{
    int n=0;
    int sum;
    cout <<"Enter a number ";
    cin >> n;
    int i; //counter
    sum=0;  //เก็บผลรวม
    i=0;   //init counter
    // while
    while(i<=n){

        sum = sum + i;
        cout << i << setw(5)<< "sum="<< sum <<endl;

        i++;
    }
    cout << "Using while loop: The summation of 0+1+...+"<<n << " is "<< sum<<endl;

    //for
    for (int x = 0; x < n; x++) {
        sum = sum + i;
        cout << x << setw(5)<< "sum="<< sum <<endl;
    cout << "Using for loop: The summation of 0+1+...+"<<n << " is "<< sum<<endl;

}


    return 0;
}
