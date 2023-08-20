//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i =0 , j=0;
        int ans=0,sum=0;
        vector<int>vt;
       while(j<n){
      sum+=arr[j];  
    
    while(i<j && sum>s){
      sum=sum-arr[i]; 
      i++;
    }
    if(sum==s){
      vt.push_back(i+1);
      vt.push_back(j+1);
      return vt;
    }
       j++;  
      }
      vt.push_back(-1);
        return vt;
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends