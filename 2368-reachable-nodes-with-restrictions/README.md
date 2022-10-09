<h2><a href="https://leetcode.com/problems/reachable-nodes-with-restrictions/">2368. Reachable Nodes With Restrictions</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is an undirected tree with <code style="user-select: auto;">n</code> nodes labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> and <code style="user-select: auto;">n - 1</code> edges.</p>

<p style="user-select: auto;">You are given a 2D integer array <code style="user-select: auto;">edges</code> of length <code style="user-select: auto;">n - 1</code> where <code style="user-select: auto;">edges[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> indicates that there is an edge between nodes <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code> in the tree. You are also given an integer array <code style="user-select: auto;">restricted</code> which represents <strong style="user-select: auto;">restricted</strong> nodes.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of nodes you can reach from node </em><code style="user-select: auto;">0</code><em style="user-select: auto;"> without visiting a restricted node.</em></p>

<p style="user-select: auto;">Note that node <code style="user-select: auto;">0</code> will <strong style="user-select: auto;">not</strong> be a restricted node.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/15/ex1drawio.png" style="width: 402px; height: 322px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, edges = [[0,1],[1,2],[3,1],[4,0],[0,5],[5,6]], restricted = [4,5]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows the tree.
We have that [0,1,2,3] are the only nodes that can be reached from node 0 without visiting a restricted node.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/15/ex2drawio.png" style="width: 412px; height: 312px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, edges = [[0,1],[0,2],[0,5],[0,4],[3,2],[6,5]], restricted = [4,2,1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows the tree.
We have that [0,5,6] are the only nodes that can be reached from node 0 without visiting a restricted node.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges.length == n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges</code> represents a valid tree.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= restricted.length &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= restricted[i] &lt; n</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">restricted</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>