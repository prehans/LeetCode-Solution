<h2><a href="https://leetcode.com/problems/print-binary-tree/">655. Print Binary Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, construct a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> string matrix <code style="user-select: auto;">res</code> that represents a <strong style="user-select: auto;">formatted layout</strong> of the tree. The formatted layout matrix should be constructed using the following rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The <strong style="user-select: auto;">height</strong> of the tree is <code style="user-select: auto;">height</code>&nbsp;and the number of rows <code style="user-select: auto;">m</code> should be equal to <code style="user-select: auto;">height + 1</code>.</li>
	<li style="user-select: auto;">The number of columns <code style="user-select: auto;">n</code> should be equal to <code style="user-select: auto;">2<sup style="user-select: auto;">height+1</sup> - 1</code>.</li>
	<li style="user-select: auto;">Place the <strong style="user-select: auto;">root node</strong> in the <strong style="user-select: auto;">middle</strong> of the <strong style="user-select: auto;">top row</strong> (more formally, at location <code style="user-select: auto;">res[0][(n-1)/2]</code>).</li>
	<li style="user-select: auto;">For each node that has been placed in the matrix at position <code style="user-select: auto;">res[r][c]</code>, place its <strong style="user-select: auto;">left child</strong> at <code style="user-select: auto;">res[r+1][c-2<sup style="user-select: auto;">height-r-1</sup>]</code> and its <strong style="user-select: auto;">right child</strong> at <code style="user-select: auto;">res[r+1][c+2<sup style="user-select: auto;">height-r-1</sup>]</code>.</li>
	<li style="user-select: auto;">Continue this process until all the nodes in the tree have been placed.</li>
	<li style="user-select: auto;">Any empty cells should contain the empty string <code style="user-select: auto;">""</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the constructed matrix </em><code style="user-select: auto;">res</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/print1-tree.jpg" style="width: 141px; height: 181px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2]
<strong style="user-select: auto;">Output:</strong> 
[["","1",""],
&nbsp;["2","",""]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/print2-tree.jpg" style="width: 207px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3,null,4]
<strong style="user-select: auto;">Output:</strong> 
[["","","","1","","",""],
&nbsp;["","2","","","","3",""],
&nbsp;["","","4","","","",""]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 2<sup style="user-select: auto;">10</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-99 &lt;= Node.val &lt;= 99</code></li>
	<li style="user-select: auto;">The depth of the tree will be in the range <code style="user-select: auto;">[1, 10]</code>.</li>
</ul>
</div>