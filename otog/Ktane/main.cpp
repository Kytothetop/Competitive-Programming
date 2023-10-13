#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;
/**
about,after,again,below,could,every,first,found,great,house,large,learn,never,other,place,plant,point,right,small,sound,spell,still,study,their,there,these,thing,think,three,water,where,which,world,would,write
 */
// 35 words
int main()
{
    int n;
    string a[35] = {"about","after","again","below","could","every","first","found","great","house","large","learn","never","other","place","plant","point","right","small","sound","spell","still","study","their","there","these","thing","think","three","water","where","which","world"};
    char q[6][5];
    for(int i=0; i<6; i++)
        {
            for(int j=0; j<5 ; j++)
                {
                    cin >> q[i][j];


                }
        }
    char *ret;


    for(int i = 0; i<6; i++)
        {
            for(int j= 0; j<5 ; j++)
                {
                    {
                        ret = strstr((q[i][j]),"point");
                        if (ret)
                            {
                                cout << "yes";
                            }
                        else
                            {
                                cout << "no";
                            }
                    }
                }
        }
    /**    for(int i = 0; i<6; i++)
            {
                for(int j= 0; j<5 ; j++)
                    {
                        for(int k = 0; k<5 ; k++)
                            {
                                for(int c = 0; c<6 ; c++)
                                    {
                                        if(q[i][j] == a[k][c])

                                            {
                                                cout << a[c];
                                            }
                                    }
                            }
                    }
            }
    }
    */
