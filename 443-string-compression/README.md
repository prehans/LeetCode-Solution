<h2><a href="https://leetcode.com/problems/string-compression/">443. String Compression</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of characters <code style="user-select: auto;">chars</code>, compress it using the following algorithm:</p>

<p style="user-select: auto;">Begin with an empty string <code style="user-select: auto;">s</code>. For each group of <strong style="user-select: auto;">consecutive repeating characters</strong> in <code style="user-select: auto;">chars</code>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If the group's length is <code style="user-select: auto;">1</code>, append the character to <code style="user-select: auto;">s</code>.</li>
	<li style="user-select: auto;">Otherwise, append the character followed by the group's length.</li>
</ul>

<p style="user-select: auto;">The compressed string <code style="user-select: auto;">s</code> <strong style="user-select: auto;">should not be returned separately</strong>, but instead, be stored <strong style="user-select: auto;">in the input character array <code style="user-select: auto;">chars</code></strong>. Note that group lengths that are <code style="user-select: auto;">10</code> or longer will be split into multiple characters in <code style="user-select: auto;">chars</code>.</p>

<p style="user-select: auto;">After you are done <strong style="user-select: auto;">modifying the input array,</strong> return <em style="user-select: auto;">the new length of the array</em>.</p>

<p style="user-select: auto;">You must write an algorithm that uses only constant extra space.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> chars = ["a","a","b","b","c","c","c"]
<strong style="user-select: auto;">Output:</strong> Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
<strong style="user-select: auto;">Explanation:</strong> The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> chars = ["a"]
<strong style="user-select: auto;">Output:</strong> Return 1, and the first character of the input array should be: ["a"]
<strong style="user-select: auto;">Explanation:</strong> The only group is "a", which remains uncompressed since it's a single character.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
<strong style="user-select: auto;">Output:</strong> Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
<strong style="user-select: auto;">Explanation:</strong> The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= chars.length &lt;= 2000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">chars[i]</code> is a lowercase English letter, uppercase English letter, digit, or symbol.</li>
</ul>
</div>