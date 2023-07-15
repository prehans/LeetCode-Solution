//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
           sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> st;
       
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                     long long int sum=0;
               sum=sum+nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target)
                    {
          st.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(sum>target)
                    l--;
                    else
                    k++;
                }
            }
        }
         vector<vector<int>> ans;
        for(auto i:st)
        ans.push_back(i);
        sort(ans.begin(),ans.end());
        return ans;
        
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends