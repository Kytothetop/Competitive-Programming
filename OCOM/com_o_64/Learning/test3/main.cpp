#include <iostream>
#include <iomanip>
/*
Task    :   NumbersIguess
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;
int credits()
{
    cout << "\n\n**************************************************\n\n~~~~This was brought to you by Kritanan Phinyo~~~~\n\n**************************************************\n\n";
}

int newsub()
{
    cout << "\n\n**************************************************\n\n";
}

int main()
{
    int n=0;
    int sum;
    cout <<"Enter a number\n: ";
    cin >> n;
    int i; //counter
    sum=0;  //เก็บผลรวม
    i=0;   //init counter
    // while
    while(i<=n){

        sum = sum + i;
        cout << ">" <<i << setw(5)<< "sum="<< sum <<endl;

        i++;
    }
    cout << "Using while loop: The summation of 0+1+...+"<<n << " is "<< sum<<endl;

    newsub();

    int sentinel = 0;
    //for
    for (int x = 0; x <= n; x++) {
        sentinel = sentinel + x;
        cout << ">" <<x << setw(5)<< "sum="<< sentinel <<endl;
    }
    cout << "Using for loop: The summation of 0+1+...+"<<n << " is "<< sentinel<<endl;
    credits();
    return 0;
}
