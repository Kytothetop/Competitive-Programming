#include <iostream>
#include <iomanip>
/*
Task    :   plab004
Lang    :   C++
Author  :   Mr. Kritanan Phinyo
Center  :   KKU039
*/
using namespace std;

int main()
{
    int li;
    cout << "What is the table's limit? \n: ";
    cin >> li;
    cout << "A multiplication table:" << endl << '\t';
    for (int first = 1 ; first <=li ; first++)
        {
    cout << first << "\t";
        }
    cout << endl;
     for(int column = 2; column <= li; column++)
     {
          cout << column << "|\t";
          for(int multiplier = 1; multiplier <= li; multiplier++)
          {
          cout << multiplier * column << '\t';
          }
          cout << endl;
     }

    return 0;
}
