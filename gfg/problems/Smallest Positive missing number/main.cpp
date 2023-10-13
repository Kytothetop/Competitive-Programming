//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
public:
    //Function to find the smallest positive number missing from the array.
    int fun(vector<int> &v, vector<int>::iterator itr)
    {
        auto it = lower_bound(itr,v.end(),0);
        if(it == v.end())
            return (*v.end())+1;
        else
            return fun(v, it+1);
//        cout << "hi";
    }
    int missingNumber(int arr[], int n)
    {
        vector<int> v(arr, arr + n);
        sort(v.begin(),v.end());
        return fun(v,v.begin());
    }
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main()
{

    //taking testcases
    int t;
    cin>>t;
    while(t--)
        {

            //input number n
            int n;
            cin>>n;
            int arr[n];

            //adding elements to the array
            for(int i=0; i<n; i++)cin>>arr[i];

            Solution ob;
            //calling missingNumber()
            cout<<ob.missingNumber(arr, n)<<endl;
        }
    return 0;
}
// } Driver Code Ends
