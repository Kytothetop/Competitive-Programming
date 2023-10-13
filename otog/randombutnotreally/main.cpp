#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool more,eka;
int a[4];
int randomly(int temp3, int temp4)
{
    // Providing a seed value
    srand((unsigned) time(NULL));
            switch(temp4){
            case 1:
                a[temp3]= (rand() % 9) + 1;  //Generate number between 0 to 99
            break;2
            default:
                for(temp3=0; temp3<temp4;temp3++)
                {
                    a[temp3]= (rand() % 9) + 1;  //Generate number between 0 to 99
                }
            break;
            }
}
int compare(int temp1, int temp2)
{
    if (a[temp1]>a[temp2])
        {
            if (more=true){randomly(temp2,1);}
            else
            {
                more = true;
                eka = false;
            }
        }
    else if (a[temp1]<a[temp2])
        {
            if (more=false){randomly(temp2,1);}
            else
            {
                more = false;
                eka = false;
            }
        }
    else if (a[temp1]==a[temp2])
        {
        eka = true;
        randomly(temp2,1);
        }
}

int main()
{
    randomly(1,4);
    for(int k=0; (k<3) && (eka = false) ;k++)
    {
        compare(k,(k+1));
    }
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3];
}
