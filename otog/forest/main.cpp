#include <iostream>

using namespace std;
int vertical=0,horizontal=0,width=0,height=0,s=0;
/**
4 10 11
KRITHFUIKA
MVJFWSAILO
LFFJDUFHJD
JGJFJIFJDN

DRDRDRDRDRD

10 10 6
KRITHFUIKA
MVJFWSAILO
LFFJDUFHJD
JGJFJIFJDN
ORKGFOHJKT
TKGIRJDYVO
OTKGIFNVMY
IGKRIFJRBB
ITJGUVPYPT
TJGITKBITL DDDRUL
 */
// U:vertical-- D:vertical++ L:horizontal-- R:horizontal++
void navigate(char direction='z')
{
    switch(direction)
        {
        case 'U':
        case 'u':
            if(vertical != 0)
                {
                    vertical--;
                }
            break;
        case 'D':
        case 'd':
                if(vertical != (height-1))
                    {
                        vertical++;
                    }
            break;
        case 'L':
        case 'l':
            if(horizontal != 0)
                {
                    horizontal--;
                }
            break;
        case 'R':
        case 'r':
            if(horizontal != (width-1))
                {
                    horizontal++;
                }
            break;
        default:
            break;
        }
        cout << ' ' << sizeof(direction);
}

int main()
{
    cin >> height >> width >> s;
    char path='z',temp='x';
    string content[width*height];
    for(int i=0; i<height; i++)
        {
            for(int j=0; j<width ; j++)
                {
                    cin >> temp;
                    content[i][j] = temp;
                }
        }
    for(int i=0; i<s; i++)
        {
            cin >> path;
            {
                navigate(path);
                //cout << content[vertical][horizontal];
            }
        }
    cout << content[vertical][horizontal] << endl;
    //cout << sizeof(vertical) + sizeof(horizontal) + sizeof(width) + sizeof(s) + sizeof(path) + sizeof(temp) + sizeof(content);
    //cout << sizeof(vertical) << ' ' << sizeof(horizontal) << ' ' << sizeof(width) << ' ' << sizeof(s) << ' ' << sizeof(path) << ' ' << sizeof(temp) << ' ' << sizeof(content);
}
