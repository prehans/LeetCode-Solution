class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(mat[i][j] == 0) q.push({i,j});
                else mat[i][j] = -1;
            }
        }
        
        while(!q.empty()) {
            auto [r,c] = q.front(); q.pop();
            
            for(int k=0;k<4;k++) {
                int nr = r + grad[k];
                int nc = c + grad[k+1];
                
                if(nr < 0 or nc < 0 or nr >= n or nc >= m or mat[nr][nc] != -1) continue;
                
                mat[nr][nc] = mat[r][c] + 1;
                q.push({nr,nc});
            }
        }
        
        return mat;
    }
};