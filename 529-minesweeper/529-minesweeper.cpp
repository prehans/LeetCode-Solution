class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& grid, vector<int>& click) {
        int m = grid.size(), n = grid[0].size();
        
        int r = click[0];
        int c = click[1];
        
        if(grid[r][c] == 'M')
            grid[r][c] = 'X';
        else {
            
            int count = 0;
            
            for(int i=-1;i<2;i++) {
                for(int j=-1;j<2;j++) {
                    if(i==0 and j==0) continue;
                    int row = r+i;
                    int col = c+j;
                    if(row < 0 or row >= m or col < 0 or col >= n) continue;
                    if(grid[row][col] == 'M' or grid[row][col] == 'X') count++;
                }
            }
            
            if(count > 0) grid[r][c] = count + 48;
            
            else if(count == 0) {
                grid[r][c] = 'B';
                for(int i=-1;i<2;i++) {
                    for(int j=-1;j<2;j++) {
                        if(i==0 and j==0) continue;
                        int row = r+i;
                        int col = c+j;
                        if(row < 0 or row >= m or col < 0 or col >= n) continue;
                        if(grid[row][col] == 'E') {
                            vector<int> temp = {row,col};
                            updateBoard(grid,temp);
                    }
                }
            }
            
        }
    }
         return grid;
    }
};