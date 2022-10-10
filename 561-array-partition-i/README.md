<h2><a href="https://leetcode.com/problems/array-partition-i/">561. Array Partition I</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> of <code style="user-select: auto;">2n</code> integers, group these integers into <code style="user-select: auto;">n</code> pairs <code style="user-select: auto;">(a<sub style="user-select: auto;">1</sub>, b<sub style="user-select: auto;">1</sub>), (a<sub style="user-select: auto;">2</sub>, b<sub style="user-select: auto;">2</sub>), ..., (a<sub style="user-select: auto;">n</sub>, b<sub style="user-select: auto;">n</sub>)</code> such that the sum of <code style="user-select: auto;">min(a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>)</code> for all <code style="user-select: auto;">i</code> is <strong style="user-select: auto;">maximized</strong>. Return<em style="user-select: auto;"> the maximized sum</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,4,3,2]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> All possible pairings (ignoring the ordering of elements) are:
1. (1, 4), (2, 3) -&gt; min(1, 4) + min(2, 3) = 1 + 2 = 3
2. (1, 3), (2, 4) -&gt; min(1, 3) + min(2, 4) = 1 + 2 = 3
3. (1, 2), (3, 4) -&gt; min(1, 2) + min(3, 4) = 1 + 3 = 4
So the maximum possible sum is 4.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [6,2,6,5,1,2]
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> The optimal pairing is (2, 1), (2, 5), (6, 6). min(2, 1) + min(2, 5) + min(6, 6) = 1 + 2 + 6 = 9.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == 2 * n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>