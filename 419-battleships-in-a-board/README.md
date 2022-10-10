<h2><a href="https://leetcode.com/problems/battleships-in-a-board/">419. Battleships in a Board</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">board</code> where each cell is a battleship <code style="user-select: auto;">'X'</code> or empty <code style="user-select: auto;">'.'</code>, return <em style="user-select: auto;">the number of the <strong style="user-select: auto;">battleships</strong> on</em> <code style="user-select: auto;">board</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Battleships</strong> can only be placed horizontally or vertically on <code style="user-select: auto;">board</code>. In other words, they can only be made of the shape <code style="user-select: auto;">1 x k</code> (<code style="user-select: auto;">1</code> row, <code style="user-select: auto;">k</code> columns) or <code style="user-select: auto;">k x 1</code> (<code style="user-select: auto;">k</code> rows, <code style="user-select: auto;">1</code> column), where <code style="user-select: auto;">k</code> can be of any size. At least one horizontal or vertical cell separates between two battleships (i.e., there are no adjacent battleships).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/10/battelship-grid.jpg" style="width: 333px; height: 333px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> board = [["X",".",".","X"],[".",".",".","X"],[".",".",".","X"]]
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> board = [["."]]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == board.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == board[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">board[i][j]</code> is either <code style="user-select: auto;">'.'</code> or <code style="user-select: auto;">'X'</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong> Could you do it in one-pass, using only <code style="user-select: auto;">O(1)</code> extra memory and without modifying the values <code style="user-select: auto;">board</code>?</p>
</div>