#include <iostream>

using namespace std;

int repeat = 1;
char character = 'a';
int bracket = 0;


//Use recursive function to find in ()

void isin(int i = 0)
{
    cin >> character;

    if(character == '(')
    {
        bracket++;
    }
    else if(character == 'i')
    {
        repeat++;
    }


    if(i>0)
        {
            isin(i-1);
        }

    if(character == ')')
    {
        bracket--;
    }
}

int main()
{
    cin
    cout << isin() << endl;
    return 0;
}
