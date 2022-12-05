//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> arr)
    {
        for(int j=m-2;j>=0;j--)
        {
            for(int i=0;i<n;i++)
            {
                if(i==0&&i==n-1)
             arr[i][j] += arr[i][j+1];

            else if(i==0)
             arr[i][j] += max(arr[i][j+1],arr[i+1][j+1]);

             else if(i==n-1)
             arr[i][j] += max(arr[i][j+1],arr[i-1][j+1]);

             else
             arr[i][j] += max(arr[i+1][j+1],max(arr[i][j+1],arr[i-1][j+1]));
            }
        }
    
     int maxi = INT_MIN;
      for(int i = 0 ; i < n ; i++)
     {
         if(maxi<arr[i][0])
         maxi = arr[i][0];
     }

   return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends