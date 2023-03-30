//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        long sum=0,ans=0;
        for(int i=0;i<K;i++)
        sum=sum+Arr[i];
         ans=max(ans,sum);
        for(int i=0;i<N-K;i++)
        {
             sum-=Arr[i];
            sum+=Arr[i+K];
           ans = max(ans, sum);
                // ans=max(ans,(sum-Arr[i-1])+Arr[i+K-1]);
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends