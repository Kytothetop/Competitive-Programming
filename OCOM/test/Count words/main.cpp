//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int countWords(string str){
        int cnt = 0;
        for(char e : str)
        {
            if(e = ' ')
            {
                cnt++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
	int t;
	string tc;
    getline(cin, tc);
    t=stoi(tc);
	while(t--)
	{
	    string s;
	    getline(cin, s);
	    Solution obj;
	    cout << obj.countWords(s) << endl;
	}
	return 0;

}


// } Driver Code Ends
