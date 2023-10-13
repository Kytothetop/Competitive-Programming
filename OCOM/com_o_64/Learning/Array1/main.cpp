#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[5];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    for(int i=0; i<5;i++)
    {
        cout <<a[i] <<endl;
    }

    char buffer[10];
    buffer[0] = 'A';
    buffer[1] = 'B';
    buffer[2] = '\0'; //Null
    buffer[3] = 'C';
    cout << buffer <<endl;

    double data[5] = {1.0 , 2.5 , 3.5 , 4.2356 , 1.23456};
    for(int i=0; i<5;i++)
    {
        cout.setf(ios::fixed);
        cout << setw(5) << setprecision(3) << data[i] << endl;
    }
    cout.unsetf(ios::fixed);
    cout << 5.1654546 << endl;

    char textOut[50];
    for(int i=0; i<=5;i++)
    {
        sprintf(textOut,"%.4f",data[i]);
        cout << i << ": " << textOut <<endl;
    }


    int d[105];
    int n;
    //string s; s="abcd2549";
    string s[105];

    int i,j,x;
    string y;

    cin >> n;
    for(int k=0; k<n;k++)
        {
            cin >> y;
            s[k] = y;
        }
    for(int k=0; k<n;k++)
        {
            cout << s[i] << endl;
        }
}
