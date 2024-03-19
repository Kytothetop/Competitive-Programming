#include <iostream>
#include <iomanip>
/*
Task    :   NumbersIguess
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
   //Counter
   int limitNum=5;
   cout <<"Enter the limit Number:";
   cin >> limitNum;
   int num=1;

   while( num<=limitNum){
    cout << setw(10)<< num << setw(6) << num*num <<endl;
    num++;
   }

   cout <<" The last num is " << num-1 <<endl;

   int i;
   cout << "Looping using the for command\n";
   for (i=1 ; (i<=limitNum); i++)
    cout << setw(10)<< i << setw(6) << i*i <<endl;

    return 0;
}
