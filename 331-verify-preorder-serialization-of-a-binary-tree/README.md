<h2><a href="https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/">331. Verify Preorder Serialization of a Binary Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">One way to serialize a binary tree is to use <strong style="user-select: auto;">preorder traversal</strong>. When we encounter a non-null node, we record the node's value. If it is a null node, we record using a sentinel value such as <code style="user-select: auto;">'#'</code>.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/12/pre-tree.jpg" style="width: 362px; height: 293px; user-select: auto;">
<p style="user-select: auto;">For example, the above binary tree can be serialized to the string <code style="user-select: auto;">"9,3,4,#,#,1,#,#,2,#,6,#,#"</code>, where <code style="user-select: auto;">'#'</code> represents a null node.</p>

<p style="user-select: auto;">Given a string of comma-separated values <code style="user-select: auto;">preorder</code>, return <code style="user-select: auto;">true</code> if it is a correct preorder traversal serialization of a binary tree.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that each comma-separated value in the string must be either an integer or a character <code style="user-select: auto;">'#'</code> representing null pointer.</p>

<p style="user-select: auto;">You may assume that the input format is always valid.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, it could never contain two consecutive commas, such as <code style="user-select: auto;">"1,,3"</code>.</li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>You are not allowed to reconstruct the tree.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#"
<strong style="user-select: auto;">Output:</strong> true
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> preorder = "1,#"
<strong style="user-select: auto;">Output:</strong> false
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> preorder = "9,#,#,1"
<strong style="user-select: auto;">Output:</strong> false
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= preorder.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">preorder</code> consist of integers in the range <code style="user-select: auto;">[0, 100]</code> and <code style="user-select: auto;">'#'</code> separated by commas <code style="user-select: auto;">','</code>.</li>
</ul>
</div>