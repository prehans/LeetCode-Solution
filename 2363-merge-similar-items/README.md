<h2><a href="https://leetcode.com/problems/merge-similar-items/">2363. Merge Similar Items</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two 2D integer arrays, <code style="user-select: auto;">items1</code> and <code style="user-select: auto;">items2</code>, representing two sets of items. Each array <code style="user-select: auto;">items</code> has the following properties:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">items[i] = [value<sub style="user-select: auto;">i</sub>, weight<sub style="user-select: auto;">i</sub>]</code> where <code style="user-select: auto;">value<sub style="user-select: auto;">i</sub></code> represents the <strong style="user-select: auto;">value</strong> and <code style="user-select: auto;">weight<sub style="user-select: auto;">i</sub></code> represents the <strong style="user-select: auto;">weight </strong>of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> item.</li>
	<li style="user-select: auto;">The value of each item in <code style="user-select: auto;">items</code> is <strong style="user-select: auto;">unique</strong>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">a 2D integer array</em> <code style="user-select: auto;">ret</code> <em style="user-select: auto;">where</em> <code style="user-select: auto;">ret[i] = [value<sub style="user-select: auto;">i</sub>, weight<sub style="user-select: auto;">i</sub>]</code><em style="user-select: auto;">,</em> <em style="user-select: auto;">with</em> <code style="user-select: auto;">weight<sub style="user-select: auto;">i</sub></code> <em style="user-select: auto;">being the <strong style="user-select: auto;">sum of weights</strong> of all items with value</em> <code style="user-select: auto;">value<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> <code style="user-select: auto;">ret</code> should be returned in <strong style="user-select: auto;">ascending</strong> order by value.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> items1 = [[1,1],[4,5],[3,8]], items2 = [[3,1],[1,5]]
<strong style="user-select: auto;">Output:</strong> [[1,6],[3,9],[4,5]]
<strong style="user-select: auto;">Explanation:</strong> 
The item with value = 1 occurs in items1 with weight = 1 and in items2 with weight = 5, total weight = 1 + 5 = 6.
The item with value = 3 occurs in items1 with weight = 8 and in items2 with weight = 1, total weight = 8 + 1 = 9.
The item with value = 4 occurs in items1 with weight = 5, total weight = 5.  
Therefore, we return [[1,6],[3,9],[4,5]].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> items1 = [[1,1],[3,2],[2,3]], items2 = [[2,1],[3,2],[1,3]]
<strong style="user-select: auto;">Output:</strong> [[1,4],[2,4],[3,4]]
<strong style="user-select: auto;">Explanation:</strong> 
The item with value = 1 occurs in items1 with weight = 1 and in items2 with weight = 3, total weight = 1 + 3 = 4.
The item with value = 2 occurs in items1 with weight = 3 and in items2 with weight = 1, total weight = 3 + 1 = 4.
The item with value = 3 occurs in items1 with weight = 2 and in items2 with weight = 2, total weight = 2 + 2 = 4.
Therefore, we return [[1,4],[2,4],[3,4]].</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> items1 = [[1,3],[2,2]], items2 = [[7,1],[2,2],[1,4]]
<strong style="user-select: auto;">Output:</strong> [[1,7],[2,4],[7,1]]
<strong style="user-select: auto;">Explanation:
</strong>The item with value = 1 occurs in items1 with weight = 3 and in items2 with weight = 4, total weight = 3 + 4 = 7. 
The item with value = 2 occurs in items1 with weight = 2 and in items2 with weight = 2, total weight = 2 + 2 = 4. 
The item with value = 7 occurs in items2 with weight = 1, total weight = 1.
Therefore, we return [[1,7],[2,4],[7,1]].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= items1.length, items2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">items1[i].length == items2[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= value<sub style="user-select: auto;">i</sub>, weight<sub style="user-select: auto;">i</sub> &lt;= 1000</code></li>
	<li style="user-select: auto;">Each <code style="user-select: auto;">value<sub style="user-select: auto;">i</sub></code> in <code style="user-select: auto;">items1</code> is <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">Each <code style="user-select: auto;">value<sub style="user-select: auto;">i</sub></code> in <code style="user-select: auto;">items2</code> is <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>