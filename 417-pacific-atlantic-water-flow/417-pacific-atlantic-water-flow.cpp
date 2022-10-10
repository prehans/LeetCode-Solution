class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        int m = h.size(),n = h[0].size();
        vector<vector<int>> res;
        
        vector<vector<bool>> pac(m,vector<bool>(n,false));
        vector<vector<bool>> atl(m,vector<bool>(n,false));
        
        for(int i=0;i<m;i++) {
            dfs(i,0,h,pac);
            dfs(i,n-1,h,atl);
        }
        
        for(int i=0;i<n;i++) {
            dfs(0,i,h,pac);
            dfs(m-1,i,h,atl);
        }
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(pac[i][j] and atl[i][j])
                    res.push_back({i,j});
            }
        }
        
        return res;
        
    }
    
    void dfs(int i,int j,vector<vector<int>> &grid,vector<vector<bool>> &vis) {
        
        
        vis[i][j] = true;
        
        if(i-1 >= 0 and !vis[i-1][j] and grid[i-1][j] >= grid[i][j]) // up
            dfs(i-1,j,grid,vis);
        
        if(i+1 < grid.size() and !vis[i+1][j] and grid[i+1][j] >= grid[i][j]) // down
            dfs(i+1,j,grid,vis);
        
        if(j-1 >= 0 and !vis[i][j-1] and grid[i][j-1] >= grid[i][j]) // left
            dfs(i,j-1,grid,vis);
        
        if(j+1 < grid[0].size() and !vis[i][j+1] and grid[i][j+1] >= grid[i][j])  // right
            dfs(i,j+1,grid,vis);
        
        
    }
};