//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int n=str.length(),c=1;
    for(int i=1;i<n;i++)
    {
        // if(str[i]=='b')
        // {
        //     int k=i;
        //     while(str[k]!='a')
        //     {
        //         //str[k]='b';
        //         k++;
        //     }
        //     c++;
        //     i=k;
        // }
        if(str[i]!=str[i-1])
        c++;
    }
    return c/2+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends