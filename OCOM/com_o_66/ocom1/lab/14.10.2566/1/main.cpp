#include <ctime>
#include <bits/stdc++.h>
//Kritanan Phinyo
using namespace std;
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
    int n = 5;
    int arr[n];
    cout << "Array Size: " << n << '\n';
    cout << "Unsorted: ";
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
//            cout << arr[i] << ' ';
        }
    cout << '\n';
    SelectionSort(arr,n);
    cout << "Sorted: ";
    for (int i =0; i <n ; i++ )cout << arr[i] << ' ';
}
