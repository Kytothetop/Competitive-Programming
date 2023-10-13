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
    int point;
    int sentinel = -1;
    int sum = 0;
    while(point!=sentinel)
    {
        sum = sum+point;
        cout << "Enter any point (Enter -1 to quit this while loop)\n: ";
        cin >> point;

        cout << point <<endl;
    }

    point = 0;
    sum = 0;
    for(;;)
    {
        sum = sum+point;
        cout << "Enter any point (Enter -1 to quit this for loop)\n: ";
        cin >> point;

        cout << point <<endl;
        if(point == sentinel){break;}
    }
    point = 0;
    sum = 0;

    do
    {
        sum = sum+point;
        cout << "Enter any point (Enter -1 to quit this do loop)\n: ";
        cin >> point;

        cout << point <<endl;
    } while(point!=sentinel);

    newsub();

    for(int column=1 ; column<=12;column++)
    {
        for(int multiplier=1 ; multiplier<=12;multiplier++)
        {
            cout << column << " x " << multiplier << " = " << multiplier*column <<endl;
        }
    }
    return 0;
}
