class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int dp[nums.size()][nums.size()];
        
        for(int g=0;g<nums.size();g++){
            int i,j;
            for(i=0,j=g;j<nums.size();i++,j++){
                if(g == 0){
                    dp[i][j] = nums[i]; 
                }else if(g == 1){
                    dp[i][j] = max(nums[i],nums[j]);
                }else{
                    int val1 = nums[i] + min(dp[i+2][j],dp[i+1][j-1]);
                    int val2 = nums[j] + min(dp[i][j-2],dp[i+1][j-1]);
                    dp[i][j] = max(val1,val2);
                }
            }
        }
        
        int player1Score = dp[0][nums.size()-1];
        int totalScore = 0;
        for(auto i : nums)
            totalScore += i;
        
        int player2Score = totalScore - player1Score;
        return player1Score >= player2Score ? true : false;
        
    }
};