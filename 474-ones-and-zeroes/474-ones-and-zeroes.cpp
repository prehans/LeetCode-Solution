class Solution {
public:
    int dp[601][101][101];
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return dfs(0,m,n,strs);
    }
    
    int dfs(int index,int m,int n,vector<string> &strs) {
        if(index >= strs.size() or m<0 or n<0) return 0;
        
        if(m == 0 and n == 0) return 0;
        
        if(dp[index][m][n] != -1) return dp[index][m][n];
        
        int zeros = count(strs[index].begin(),strs[index].end(),'0');
        int ones = strs[index].size() - zeros;
        
        if(m >= zeros and n >= ones)
            return dp[index][m][n] = max(1+dfs(index+1,m-zeros,n-                ones,strs),dfs(index+1,m,n,strs));
        
        return dp[index][m][n] = dfs(index+1,m,n,strs);
        
    }
};