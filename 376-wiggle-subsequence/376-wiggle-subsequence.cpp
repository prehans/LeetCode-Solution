class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
       int n=nums.size();
        if(n<2)return n;
        vector<int>dp;
        for(int i=1;i<n;i++){
            int a=nums[i]-nums[i-1];
            if(a!=0)
                dp.push_back(a);
        }
        int ans=dp.size();
        for(int i=1;i<dp.size();i++){
            if(dp[i]<0 && dp[i-1]<0)ans--;
            if(dp[i]>0 && dp[i-1]>0)ans--;
        }
        
        return ans+1;
    }
};