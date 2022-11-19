//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
int MOD=1000000007;
int fun(long long int n,long long dp[])
{
    if(n<=2)
    return n;
    else if(dp[n]!=-1)
    return dp[n];
    
    long long int a=fun(n-1, dp)%MOD;
    long long int b=((n-1)%MOD*fun(n-2,dp)%MOD)%MOD;
    return dp[n]=a+b;
}

    int countFriendsPairings(int n) 
    { 
        long long dp[n+1];
        memset(dp,-1,sizeof(dp));
        return fun(n,dp)%MOD;
    }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends