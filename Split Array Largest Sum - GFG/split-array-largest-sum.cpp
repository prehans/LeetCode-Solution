//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool solve(int mid,int arr[],int N,int k)
  {
      int sum=0;
      int count=1;
      for(int i=0;i<N;i++)
      {
          if(sum+arr[i]<=mid)
          sum=sum+arr[i];
          else
          {
              sum=arr[i];
              count++;
          }
      }
      if(count<=k)
      return true;
      return false;
  }
    int splitArray(int arr[] ,int N, int K) {
       int sum=accumulate(arr,arr+N,0);
       int val=0;
       for(int i=0;i<N;i++)
       val=max(val,arr[i]);
       int low=val,high=sum;
       int ans;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(solve(mid,arr,N,K))
           {
               ans=mid;
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends