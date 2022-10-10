```
class Solution {
private:
void dfs(int r,int c,vector<vector<char>> &board) {
if(r >= board.size() or c >= board[r].size() or r < 0 or c < 0 or board[r][c] == '.')
return;
if(board[r][c] == 'X') board[r][c] = '.';
dfs(r+1,c,board);
dfs(r-1,c,board);
dfs(r,c+1,board);
dfs(r,c-1,board);
}
public:
int countBattleships(vector<vector<char>>& board) {
int m = board.size(),n = board[0].size();
int count = 0;
for(int i=0;i<m;i++) {
for(int j=0;j<n;j++) {
if(board[i][j] == 'X') {
count += 1;
dfs(i,j,board);
}
}
}
return count;
}
};
```