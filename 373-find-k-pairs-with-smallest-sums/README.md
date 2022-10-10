<h2><a href="https://leetcode.com/problems/find-k-pairs-with-smallest-sums/">373. Find K Pairs with Smallest Sums</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> sorted in <strong style="user-select: auto;">ascending order</strong> and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">Define a pair <code style="user-select: auto;">(u, v)</code> which consists of one element from the first array and one element from the second array.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the</em> <code style="user-select: auto;">k</code> <em style="user-select: auto;">pairs</em> <code style="user-select: auto;">(u<sub style="user-select: auto;">1</sub>, v<sub style="user-select: auto;">1</sub>), (u<sub style="user-select: auto;">2</sub>, v<sub style="user-select: auto;">2</sub>), ..., (u<sub style="user-select: auto;">k</sub>, v<sub style="user-select: auto;">k</sub>)</code> <em style="user-select: auto;">with the smallest sums</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,7,11], nums2 = [2,4,6], k = 3
<strong style="user-select: auto;">Output:</strong> [[1,2],[1,4],[1,6]]
<strong style="user-select: auto;">Explanation:</strong> The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,1,2], nums2 = [1,2,3], k = 2
<strong style="user-select: auto;">Output:</strong> [[1,1],[1,1]]
<strong style="user-select: auto;">Explanation:</strong> The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2], nums2 = [3], k = 3
<strong style="user-select: auto;">Output:</strong> [[1,3],[2,3]]
<strong style="user-select: auto;">Explanation:</strong> All possible pairs are returned from the sequence: [1,3],[2,3]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1.length, nums2.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= nums1[i], nums2[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> both are sorted in <strong style="user-select: auto;">ascending order</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>