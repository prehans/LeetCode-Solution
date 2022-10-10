class Solution {
private:
    int dfs(int r,int c,int m,int n,int maxMove,vector<vector<vector<long long>>> &dp) {
        
        if(r < 0 or c < 0 or r >= m or c >= n) return 1;
        if(maxMove == 0) return 0;
        
        if(dp[r][c][maxMove] != -1) return dp[r][c][maxMove];
        
        long long left = dfs(r,c+1,m,n,maxMove-1,dp);
        long long right = dfs(r,c-1,m,n,maxMove-1,dp);
        long long up = dfs(r-1,c,m,n,maxMove-1,dp);
        long long down = dfs(r+1,c,m,n,maxMove-1,dp);
            
        return dp[r][c][maxMove] = (left + right + up + down)%1000000007;
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<long long>>> dp(m,vector<vector<long long>>(n,vector<long long>(maxMove+1,-1)));
        return dfs(startRow,startColumn,m,n,maxMove,dp);
    }
};