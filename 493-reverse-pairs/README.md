<h2><a href="https://leetcode.com/problems/reverse-pairs/">493. Reverse Pairs</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code>, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">reverse pairs</strong> in the array</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">reverse pair</strong> is a pair <code style="user-select: auto;">(i, j)</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i &lt; j &lt; nums.length</code> and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i] &gt; 2 * nums[j]</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,2,3,1]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The reverse pairs are:
(1, 4) --&gt; nums[1] = 3, nums[4] = 1, 3 &gt; 2 * 1
(3, 4) --&gt; nums[3] = 3, nums[4] = 1, 3 &gt; 2 * 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,4,3,5,1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The reverse pairs are:
(1, 4) --&gt; nums[1] = 4, nums[4] = 1, 4 &gt; 2 * 1
(2, 4) --&gt; nums[2] = 3, nums[4] = 1, 3 &gt; 2 * 1
(3, 4) --&gt; nums[3] = 5, nums[4] = 1, 5 &gt; 2 * 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= nums[i] &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>
</div>