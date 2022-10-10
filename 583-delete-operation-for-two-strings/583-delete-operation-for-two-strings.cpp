class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.length()+1,vector<int>(word2.length()+1,0));
        
        for(int i=0;i<dp.size();i++) {
            dp[i][0] = i;
        }
        for(int i=0;i<dp[0].size();i++) {
            dp[0][i] = i;
        }
        
        
        for(int i=1;i<dp.size();i++) {
            for(int j=1;j<dp[0].size();j++) {
                if(word1[i-1] == word2[j-1]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else
                    dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + 1;
            }
        }

        return dp[word1.length()][word2.length()];
    }
};