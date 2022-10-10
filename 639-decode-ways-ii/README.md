<h2><a href="https://leetcode.com/problems/decode-ways-ii/">639. Decode Ways II</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A message containing letters from <code style="user-select: auto;">A-Z</code> can be <strong style="user-select: auto;">encoded</strong> into numbers using the following mapping:</p>

<pre style="user-select: auto;">'A' -&gt; "1"
'B' -&gt; "2"
...
'Z' -&gt; "26"
</pre>

<p style="user-select: auto;">To <strong style="user-select: auto;">decode</strong> an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, <code style="user-select: auto;">"11106"</code> can be mapped into:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"AAJF"</code> with the grouping <code style="user-select: auto;">(1 1 10 6)</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">"KJF"</code> with the grouping <code style="user-select: auto;">(11 10 6)</code></li>
</ul>

<p style="user-select: auto;">Note that the grouping <code style="user-select: auto;">(1 11 06)</code> is invalid because <code style="user-select: auto;">"06"</code> cannot be mapped into <code style="user-select: auto;">'F'</code> since <code style="user-select: auto;">"6"</code> is different from <code style="user-select: auto;">"06"</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">In addition</strong> to the mapping above, an encoded message may contain the <code style="user-select: auto;">'*'</code> character, which can represent any digit from <code style="user-select: auto;">'1'</code> to <code style="user-select: auto;">'9'</code> (<code style="user-select: auto;">'0'</code> is excluded). For example, the encoded message <code style="user-select: auto;">"1*"</code> may represent any of the encoded messages <code style="user-select: auto;">"11"</code>, <code style="user-select: auto;">"12"</code>, <code style="user-select: auto;">"13"</code>, <code style="user-select: auto;">"14"</code>, <code style="user-select: auto;">"15"</code>, <code style="user-select: auto;">"16"</code>, <code style="user-select: auto;">"17"</code>, <code style="user-select: auto;">"18"</code>, or <code style="user-select: auto;">"19"</code>. Decoding <code style="user-select: auto;">"1*"</code> is equivalent to decoding <strong style="user-select: auto;">any</strong> of the encoded messages it can represent.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> consisting of digits and <code style="user-select: auto;">'*'</code> characters, return <em style="user-select: auto;">the <strong style="user-select: auto;">number</strong> of ways to <strong style="user-select: auto;">decode</strong> it</em>.</p>

<p style="user-select: auto;">Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "*"
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> The encoded message can represent any of the encoded messages "1", "2", "3", "4", "5", "6", "7", "8", or "9".
Each of these can be decoded to the strings "A", "B", "C", "D", "E", "F", "G", "H", and "I" respectively.
Hence, there are a total of 9 ways to decode "*".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1*"
<strong style="user-select: auto;">Output:</strong> 18
<strong style="user-select: auto;">Explanation:</strong> The encoded message can represent any of the encoded messages "11", "12", "13", "14", "15", "16", "17", "18", or "19".
Each of these encoded messages have 2 ways to be decoded (e.g. "11" can be decoded to "AA" or "K").
Hence, there are a total of 9 * 2 = 18 ways to decode "1*".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "2*"
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation:</strong> The encoded message can represent any of the encoded messages "21", "22", "23", "24", "25", "26", "27", "28", or "29".
"21", "22", "23", "24", "25", and "26" have 2 ways of being decoded, but "27", "28", and "29" only have 1 way.
Hence, there are a total of (6 * 2) + (3 * 1) = 12 + 3 = 15 ways to decode "2*".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is a digit or <code style="user-select: auto;">'*'</code>.</li>
</ul>
</div>