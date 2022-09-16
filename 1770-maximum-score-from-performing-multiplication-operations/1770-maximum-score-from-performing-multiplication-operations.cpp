class Solution {
public:
    vector<vector<int>>dp;
    int maximumScore(vector<int>& nums, vector<int>& multipliers)
    {
        int n=nums.size();
        int m=multipliers.size();
        dp.assign(m+1,vector<int>(m+1,INT_MIN));
        return score(0,0,n-1,nums,multipliers);
        
    }
    int score(int i, int l,int r,vector<int>&nums , vector<int>&multipliers)
    {
        int m=multipliers.size();
        if(i==multipliers.size())
            return 0;
        if(dp[i][l]!=INT_MIN)
        {
            return dp[i][l];
        }
      int left=multipliers[i]*nums[l]+score(i+1 ,l+1,r,nums,multipliers);
        int right=multipliers[i]*nums[r]+score(i+1,l,r-1,nums,multipliers);
       return dp[i][l]= max(left , right);
    }
};