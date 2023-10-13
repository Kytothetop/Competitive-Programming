#include <iostream>
/*
TASK: BEE
LANG: C++
AUTHOR: Kritanan Phinyo
CENTER: KKU039
*/


using namespace std;


//int Queen = 1;
int Worker = 1, Soldier = 0;
int temp = 0;
short int year = 0;

void BEE()
{
    //Queen = 1;
    Worker = 1;
    Soldier = 0;

    for(int i =0; i<year; i++)
        {
            temp = Worker;
            Worker += 1+Soldier;
            //Worker += Soldier;
            //Soldier = 0;

            //Soldier += temp;
            Soldier = temp;

            //Worker += Queen;

        }
}


int main()
{
    do
        {
            cin >> year;
            if(year == (-1) || year == 0)
            {
                break;
            }
            BEE();
            cout << Worker << ' ' << 1+Worker+Soldier << ' ';
            //cout << Worker << ' ' << Queen+Worker+Soldier << '\n';
        }
    while( year != (-1) && year != 0);
    return 0;
}
