//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int callFromTwo(deque<int>& a, deque<int>& b)
    {
        if(a.front() <= b.front() && !(a.empty()))
        {
            int temp = a.front();
            a.pop_front();
            return temp;
        }
            int temp = b.front();
            b.pop_front();
            return temp;
    }
    int findMedian(int brr[], int n, int crr[], int m)
    {
        int arr[n+m];
        deque<int> b(brr,brr+n) , c(crr,crr+m);
        for(int i = 0 ; i < n+m ; i++)
        {
            arr[i] = callFromTwo(b,c);
        }
//        for(int i = 0 ; i < n+m ; i++)
//        {
//            cout << arr[i] << ' ';
//        }
//        cout << '\n';
        int k = ((n+m+1)/2)-1;
//        cout << k;
        if((n+m) % 2 == 0)
        {
            return (arr[k]+arr[k+1])/2;
        }
        else
            return (arr[k]);
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;

	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];

	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;

	}

}
// } Driver Code Ends
