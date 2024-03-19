#include <iostream>
#include <iomanip>
/**
9,5,6,7,8,3,4,1,5,2
 */


using namespace std;
//void insertionSort(int A[], int n)
void insertionSort(string A[], int n)
{
    //int key;
    string key;
    int j;
    for (int i =1 ; i<n ; i++)
        {
            key =A[i];
            j = i-1;
            while(j>=0 && A[j]>key)
                {
                    A[j+1] = A[j];
                    j= j-1;
                }
            A[j+1] = key;
        }
}
//void display(int A[], int n)
void display(string A[], int n)
{
    for(int i = 0 ; i<n; i++)
        {
            cout << setw(3) << A[i];
        }
    cout << endl;
}
int main()
{
    int n = 10;
    /**
    int arr [n]= {9,5,6,7,8,3,4,1,5,2};
    display(arr,n);
    insertionSort(arr,n);
    display(arr,n);
    */
    n = 5;
    string name[n] = {"Ab","Ka","Ca","Bb","Na"};
    display(name,n);
    insertionSort(name,n);
    display(name,n);
    return 0;
}
