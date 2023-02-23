//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   bool solve(int arr[],int mid,int days,int N){
        int sum=0,D=1;
        for(int i=0;i<N;i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else if(arr[i]<=mid){
                D++;
                sum=arr[i];
            }
            else{
                return false;
            }
        }
        return D<=days;
    }
  
    int leastWeightCapacity(int arr[], int N, int days) {
        int sum=accumulate(arr,arr+N,0);
        int low=0,high=sum;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(solve(arr,mid,days,N)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
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
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends