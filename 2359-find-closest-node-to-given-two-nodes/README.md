<h2><a href="https://leetcode.com/problems/find-closest-node-to-given-two-nodes/">2359. Find Closest Node to Given Two Nodes</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">directed</strong> graph of <code style="user-select: auto;">n</code> nodes numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>, where each node has <strong style="user-select: auto;">at most one</strong> outgoing edge.</p>

<p style="user-select: auto;">The graph is represented with a given <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">edges</code> of size <code style="user-select: auto;">n</code>, indicating that there is a directed edge from node <code style="user-select: auto;">i</code> to node <code style="user-select: auto;">edges[i]</code>. If there is no outgoing edge from <code style="user-select: auto;">i</code>, then <code style="user-select: auto;">edges[i] == -1</code>.</p>

<p style="user-select: auto;">You are also given two integers <code style="user-select: auto;">node1</code> and <code style="user-select: auto;">node2</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">index</strong> of the node that can be reached from both </em><code style="user-select: auto;">node1</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">node2</code><em style="user-select: auto;">, such that the <strong style="user-select: auto;">maximum</strong> between the distance from </em><code style="user-select: auto;">node1</code><em style="user-select: auto;"> to that node, and from </em><code style="user-select: auto;">node2</code><em style="user-select: auto;"> to that node is <strong style="user-select: auto;">minimized</strong></em>. If there are multiple answers, return the node with the <strong style="user-select: auto;">smallest</strong> index, and if no possible answer exists, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">Note that <code style="user-select: auto;">edges</code> may contain cycles.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/07/graph4drawio-2.png" style="width: 321px; height: 161px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> edges = [2,2,3,-1], node1 = 0, node2 = 1
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The distance from node 0 to node 2 is 1, and the distance from node 1 to node 2 is 1.
The maximum of those two distances is 1. It can be proven that we cannot get a node with a smaller maximum distance than 1, so we return node 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/07/graph4drawio-4.png" style="width: 195px; height: 161px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> edges = [1,2,-1], node1 = 0, node2 = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The distance from node 0 to node 2 is 2, and the distance from node 2 to itself is 0.
The maximum of those two distances is 2. It can be proven that we cannot get a node with a smaller maximum distance than 2, so we return node 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == edges.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1 &lt;= edges[i] &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i] != i</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= node1, node2 &lt; n</code></li>
</ul>
</div>