class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> dp(nums.size());
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            vector<int> temp;
            for(int j=0;j<i;j++) {
                if(nums[i] % nums[j] == 0 or nums[j] % nums[i] == 0) {
                    if(dp[j].size() >= temp.size()) {
                        temp.clear();
                        for(auto it : dp[j]) temp.push_back(it);
                    }
                }
            } 
            temp.push_back(nums[i]);
            dp[i] = temp;
            if(dp[i].size() > ans.size()) {
                ans.clear();
                for(auto it : dp[i]) ans.push_back(it);
            }        
        }
        
        return ans;
    }
};