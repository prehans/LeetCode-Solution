//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		   int n=str.size();
		   int dp[n+1][n+1];
		   memset(dp ,0,sizeof(dp));
		   for(int i=1;i<n+1;i++)
		   {
		       for(int j=1;j<n+1;j++)
		       {
		           if(str[i-1]==str[j-1] and i!=j)
		           dp[i][j]=1+dp[i-1][j-1];
		           else
		           dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		       }
		   }
		   return dp[n][n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends