#include <iostream>
#include <iomanip>

using namespace std;
void passByValue(int x){x=10;}
void passByRef(int & x){x=12;}
void passByAddress(int * x){*x=15;}
void displayData(int d[],int n){
    cout << '\n';
    for(int i =0; i <n;i++){
        if(i!=0){cout << '\t';}
        cout << d[i];
    }
    cout << endl;
}
void displayData2(int * d,int n){
    cout << '\n';
    for(int i =0; i <n;i++){
        if(i!=0){cout << '\t';}
        cout << d[i];
    }
    cout << endl;
}
void displayData2D(int d[][3],int row){
    cout << '\n';
    for(int i =0; i <row;i++){
        for(int j =0; j <3;j++){
        if(j!=0){cout << '\t';}
        cout << d[i][j];
        }
        cout << endl;
    }

}

int main()
{
    int m[2][3] = {{1,2,3},{4,5,6}};
    int a,b,c;
    a=5;
    b=6;
    c=7;
    passByValue(a);
    passByRef(b);
    passByAddress(&c);

    cout << "a =\t" << a << endl;
    cout << "b =\t" << b << endl;
    cout << "c =\t" << c << endl;
    int data[5] = {1,2,3,4,5};
    displayData(data,5);
    displayData2D(m,2);
    return 0;
}
