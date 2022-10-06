class Solution {
public:
    int m=9,n=9;
    bool isvalid(vector<vector<char>>& board,int row,int col,char c)
    {
        int nrow=3*(row/3);
        int ncol=3*(col/3);
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==c || board[row][i]==c || board[nrow+i/3][ncol+i%3]==c)return false;
        }
        return true;
    }
    bool helper(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char k='1';k<='9';k++)
                    {
                        if(isvalid(board,i,j,k))
                        {
                            board[i][j]=k;
                            if(helper(board))return true;
                            else board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board);
    }
};