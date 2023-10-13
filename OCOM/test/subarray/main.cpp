//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
long long int func(int n)
{
    if(n != 0)
    return n + func(n-1);
}
long long int no_of_subarrays(int n, vector<int> &arr) {
    int cnt = 0;
    int cntz = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0 && i != n-1)
        {
            cntz++;
        }
        else
        {
            cnt += func(cntz);
            cntz = 0;
            continue;
        }
    }
    return cnt;
}

//{ Driver Code Starts.

int main() {

        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
}

// } Driver Code Ends
