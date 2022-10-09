<h2><a href="https://leetcode.com/problems/construct-smallest-number-from-di-string/">2375. Construct Smallest Number From DI String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">pattern</code> of length <code style="user-select: auto;">n</code> consisting of the characters <code style="user-select: auto;">'I'</code> meaning <strong style="user-select: auto;">increasing</strong> and <code style="user-select: auto;">'D'</code> meaning <strong style="user-select: auto;">decreasing</strong>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">num</code> of length <code style="user-select: auto;">n + 1</code> is created using the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">num</code> consists of the digits <code style="user-select: auto;">'1'</code> to <code style="user-select: auto;">'9'</code>, where each digit is used <strong style="user-select: auto;">at most</strong> once.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">pattern[i] == 'I'</code>, then <code style="user-select: auto;">num[i] &lt; num[i + 1]</code>.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">pattern[i] == 'D'</code>, then <code style="user-select: auto;">num[i] &gt; num[i + 1]</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the lexicographically <strong style="user-select: auto;">smallest</strong> possible string </em><code style="user-select: auto;">num</code><em style="user-select: auto;"> that meets the conditions.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pattern = "IIIDIDDD"
<strong style="user-select: auto;">Output:</strong> "123549876"
<strong style="user-select: auto;">Explanation:
</strong>At indices 0, 1, 2, and 4 we must have that num[i] &lt; num[i+1].
At indices 3, 5, 6, and 7 we must have that num[i] &gt; num[i+1].
Some possible values of num are "245639871", "135749862", and "123849765".
It can be proven that "123549876" is the smallest possible num that meets the conditions.
Note that "123414321" is not possible because the digit '1' is used more than once.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pattern = "DDD"
<strong style="user-select: auto;">Output:</strong> "4321"
<strong style="user-select: auto;">Explanation:</strong>
Some possible values of num are "9876", "7321", and "8742".
It can be proven that "4321" is the smallest possible num that meets the conditions.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= pattern.length &lt;= 8</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pattern</code> consists of only the letters <code style="user-select: auto;">'I'</code> and <code style="user-select: auto;">'D'</code>.</li>
</ul>
</div>