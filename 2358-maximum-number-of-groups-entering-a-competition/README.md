<h2><a href="https://leetcode.com/problems/maximum-number-of-groups-entering-a-competition/">2358. Maximum Number of Groups Entering a Competition</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a positive integer array <code style="user-select: auto;">grades</code> which represents the grades of students in a university. You would like to enter <strong style="user-select: auto;">all</strong> these students into a competition in <strong style="user-select: auto;">ordered</strong> non-empty groups, such that the ordering meets the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The sum of the grades of students in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> group is <strong style="user-select: auto;">less than</strong> the sum of the grades of students in the <code style="user-select: auto;">(i + 1)<sup style="user-select: auto;">th</sup></code> group, for all groups (except the last).</li>
	<li style="user-select: auto;">The total number of students in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> group is <strong style="user-select: auto;">less than</strong> the total number of students in the <code style="user-select: auto;">(i + 1)<sup style="user-select: auto;">th</sup></code> group, for all groups (except the last).</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of groups that can be formed</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grades = [10,6,12,7,3,5]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The following is a possible way to form 3 groups of students:
- 1<sup style="user-select: auto;">st</sup> group has the students with grades = [12]. Sum of grades: 12. Student count: 1
- 2<sup style="user-select: auto;">nd</sup> group has the students with grades = [6,7]. Sum of grades: 6 + 7 = 13. Student count: 2
- 3<sup style="user-select: auto;">rd</sup> group has the students with grades = [10,3,5]. Sum of grades: 10 + 3 + 5 = 18. Student count: 3
It can be shown that it is not possible to form more than 3 groups.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grades = [8,8]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> We can only form 1 group, since forming 2 groups would lead to an equal number of students in both groups.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= grades.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= grades[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>