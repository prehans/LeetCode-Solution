class Solution {
public:
    //dynamic programming - tabulation
    int change(int n, vector<int>& coins) {
        vector<int> dp(n+1,0);
        dp[0] = 1;
        
        for(auto coin : coins){
            for(int amount=0;amount<n+1;amount++){
                if(coin <= amount){
                    dp[amount] += dp[amount - coin];
                }
            }
        }
        
        return dp[n];
    }
};