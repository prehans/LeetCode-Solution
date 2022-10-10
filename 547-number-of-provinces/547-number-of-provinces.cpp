class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(),false);
        int prov = 0;
        
        for(int i=0;i<isConnected.size();i++) {
            if(visited[i] == false) {
                dfs(isConnected,i,visited);
                prov++;
            }
        }
        
        return prov;
    }
    
    void dfs(vector<vector<int>> &grid,int i,vector<bool> &visited) {
        for(int j=0;j<grid.size();j++) { // traversing through col
            if(grid[i][j] == 1 and visited[j] == false) {
                visited[j] = true;
                dfs(grid,j,visited);
            }
        }
    }
};