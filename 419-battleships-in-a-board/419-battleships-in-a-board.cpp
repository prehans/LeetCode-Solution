class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size(),n = board[0].size();
        int count = 0;
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                count += board[i][j] == 'X' and 
                         (i == 0 or board[i-1][j] != 'X') and (j == 0 or board[i][j-1] != 'X');
            }
        }
        
        return count;
    }
};