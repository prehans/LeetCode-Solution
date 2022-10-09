<h2><a href="https://leetcode.com/problems/time-needed-to-rearrange-a-binary-string/">2380. Time Needed to Rearrange a Binary String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a binary string <code style="user-select: auto;">s</code>. In one second, <strong style="user-select: auto;">all</strong> occurrences of <code style="user-select: auto;">"01"</code> are <strong style="user-select: auto;">simultaneously</strong> replaced with <code style="user-select: auto;">"10"</code>. This process <strong style="user-select: auto;">repeats</strong> until no occurrences of <code style="user-select: auto;">"01"</code> exist.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the number of seconds needed to complete this process.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "0110101"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
After one second, s becomes "1011010".
After another second, s becomes "1101100".
After the third second, s becomes "1110100".
After the fourth second, s becomes "1111000".
No occurrence of "01" exists any longer, and the process needed 4 seconds to complete,
so we return 4.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "11100"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
No occurrence of "01" exists in s, and the processes needed 0 seconds to complete,
so we return 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>