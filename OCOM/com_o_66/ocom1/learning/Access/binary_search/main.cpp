#include <ctime>
#include <bits/stdc++.h>
//Kritanan Phinyo
using namespace std;
int bi_search(int *arr,int low, int high, int key)
{
    if(low <= high)
        {
            int mid = low + (high-low)/2;
//            cout << "Checking: " << arr[mid] << " at " << mid+1 <<'\n';
            if(key < arr[mid])
                {
                    bi_search(arr,low,mid-1,key);
                }
            else if(key > arr[mid])
                {
                    bi_search(arr,mid+1,high,key);
                }
            else
                {
                    return mid;
                }

        }
}
int main()
{
    int testcase = 1;
    while(testcase--)
        {
            cout << "\n\n";
            srand(time(NULL));
            int arr[rand()%10+10];
//    int arr[5];
            int n = sizeof(arr)/sizeof(arr[0]);
            cout << "Array Size: " << n << '\n';
            cout << "Unsorted: ";
            for (int i = 0; i < n; i++)
                {
                    arr[i] = rand()%20;
                    cout << arr[i] << ' ';
                }
            cout << '\n';
            sort(arr,arr+n);
            cout << "Sorted: ";
            for (int i =0; i <n ; i++ )cout << arr[i] << ' ';

            cout << "\nWhat do you want to find?\n: ";
            int key;
            cin >> key;
//            key = arr[rand()%n];
            cout << '\n';
            int high=n,low=0,mid;
            bool check = false;
            while(low <= high and not check)
                {
                    mid = low + (high-low)/2;
                    cout << "Checking: " << arr[mid] << " at " << mid+1 <<'\n';
                    if(key < arr[mid])
                        {
                            high = mid-1;
                        }
                    else if(key > arr[mid])
                        {
                            low = mid+1;
                        }
                    else
                        {
                            cout << "Found " << key << " at: " << mid+1;
                            check = 1;
                        }
                }
            if(!check)cout << "Not Found";
//            cout << '\n' <<binary_search(arr, arr+n, key);
            cout << "\nUsing Recursive Function: " << bi_search(arr,0,n,key)+1;

        }
}
