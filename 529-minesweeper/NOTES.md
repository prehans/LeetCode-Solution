q.push({r,c+1});
board[r][c+1] = 'B';
}
if(c-1 >= 0 and board[r][c-1] == 'E') {
q.push({r,c-1});
board[r][c-1] = 'B';
}
if(r+1 < m  and c+1 < n and board[r+1][c+1] == 'E') {
q.push({r+1,c+1});
board[r+1][c+1] = 'B';
}
if(r+1 < m  and c-1 >= 0 and board[r+1][c-1] == 'E') {
q.push({r+1,c-1});
board[r+1][c-1] = 'B';
}
if(r-1 >= 0  and c+1 < n and board[r-1][c+1] == 'E') {
q.push({r-1,c+1});
board[r-1][c+1] = 'B';
}
if(r-1 >= 0  and c-1 >= 0 and board[r-1][c-1] == 'E') {
q.push({r-1,c-1});
board[r-1][c-1] = 'B';
}
}
};
```