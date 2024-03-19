#include <ctime>
#include <bits/stdc++.h>
//Kritanan Phinyo
using namespace std;
void swp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
bool Check(int* arr,int n)
{
    for (int i =0; i <n ; i++ )
        {
            if(arr[i] > arr[i+1]) return false;
        }
    return true;
}
// 2 7 3 9 5
void SelectionSort(int* arr,int n)
{
    for(int j =0; j < n; j++)
        {
            int watch = 0;
            for(int i = 0; i < n-j; i++)if(arr[i] > arr[watch])watch = i;
            swap(arr[watch],arr[n-j-1]);
        }
}
int main()
{
    srand(time(NULL));
//    int arr[rand()%10+10];
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array Size: " << n << '\n';
    cout << "Unsorted: ";
    for (int i = 0; i < n; i++)
        {
            arr[i] = rand()%20;
            cout << arr[i] << ' ';
        }
    cout << '\n';
    SelectionSort(arr,n);
    cout << "Sorted: ";
    for (int i =0; i <n ; i++ )cout << arr[i] << ' ';
}
