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
		if(arr[i] > arr[i+1])
			return false;
	}
	return true;
}

void BubbleSort(int* arr,int n)
{
//	int n = sizeof(arr)/sizeof(arr[0]);
    for (int i =0; i <n ; i++ )
        {
			Check(arr,n);for (int j =0; j <n-i-1 ; j++ ){if(arr[j] > arr[j+1]){swp(arr[j],arr[j+1]);for(int k =0 ; k < n;k++)cout << arr[k] << ' ';}cout << '\n';}
        }
}
int main()
{
    srand(time(NULL));
//    int arr[rand()%10+10];
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array Size: " << n << '\n';
    cout << "Unsorted: ";for (int i = 0; i < n; i++){arr[i] = rand()%20;cout << arr[i] << ' ';}cout << '\n';
    BubbleSort(arr,n);
    cout << "Sorted: ";for (int i =0; i <n ; i++ )cout << arr[i] << ' ';}
