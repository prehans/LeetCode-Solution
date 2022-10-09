<h2><a href="https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/">2434. Using a Robot to Print the Lexicographically Smallest String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> and a robot that currently holds an empty string <code style="user-select: auto;">t</code>. Apply one of the following operations until <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> <strong style="user-select: auto;">are both empty</strong>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Remove the <strong style="user-select: auto;">first</strong> character of a string <code style="user-select: auto;">s</code> and give it to the robot. The robot will append this character to the string <code style="user-select: auto;">t</code>.</li>
	<li style="user-select: auto;">Remove the <strong style="user-select: auto;">last</strong> character of a string <code style="user-select: auto;">t</code> and give it to the robot. The robot will write this character on paper.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the lexicographically smallest string that can be written on the paper.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "zza"
<strong style="user-select: auto;">Output:</strong> "azz"
<strong style="user-select: auto;">Explanation:</strong> Let p denote the written string.
Initially p="", s="zza", t="".
Perform first operation three times p="", s="", t="zza".
Perform second operation three times p="azz", s="", t="".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "bac"
<strong style="user-select: auto;">Output:</strong> "abc"
<strong style="user-select: auto;">Explanation:</strong> Let p denote the written string.
Perform first operation twice p="", s="c", t="ba". 
Perform second operation twice p="ab", s="c", t="". 
Perform first operation p="ab", s="", t="c". 
Perform second operation p="abc", s="", t="".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "bdda"
<strong style="user-select: auto;">Output:</strong> "addb"
<strong style="user-select: auto;">Explanation:</strong> Let p denote the written string.
Initially p="", s="bdda", t="".
Perform first operation four times p="", s="", t="bdda".
Perform second operation four times p="addb", s="", t="".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only English lowercase letters.</li>
</ul>
</div>