//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        // Code here
        int ans=0,cnt=0, l=0;
        for(int r=0;r<n;r++)
        {
            if(nums[r]==0)
            cnt++;
            if(cnt>k)
            {
                while(cnt>k)
                {
                    if(nums[l]==0)
                    cnt--;
                    l++;
                }
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends