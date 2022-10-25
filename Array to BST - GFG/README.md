# Array to BST
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a sorted array. Convert it into a Height balanced&nbsp;Binary Search Tree (BST). Find the preorder traversal of height balanced BST. If there exist many such balanced BST consider the tree whose preorder is lexicographically smallest.<br style="user-select: auto;">
Height balanced BST means a binary tree in which the depth of the left subtree and the right subtree&nbsp;of every node never differ by more than 1.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = {1, 2, 3, 4}
<strong style="user-select: auto;">Output:</strong> {2, 1, 3, 4}
<strong style="user-select: auto;">Explanation:</strong> 
The preorder traversal of the following 
BST formed is {2, 1, 3, 4}:
</span><span style="font-size: 18px; user-select: auto;">&nbsp;          2
</span><span style="font-size: 18px; user-select: auto;">&nbsp;        /   \
</span>           <span style="font-size: 18px; user-select: auto;">1     3
</span><span style="font-size: 18px; user-select: auto;">&nbsp;              \
&nbsp;               4</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>nums = {1,2,3,4,5,6,7}
<strong style="user-select: auto;">Ouput: </strong>{4,2,1,3,6,5,7}
<strong style="user-select: auto;">Explanation: 
</strong>The preorder traversal of the following
BST formed is {4,2,1,3,6,5,7} :
        4
       / \
      2   6
     / \  / \
    1   3 5  7</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">sortedArrayToBST()&nbsp;</strong>which takes the sorted array <strong style="user-select: auto;">nums</strong> as input paramater and returns the preorder traversal of height balanced BST. If there exist many such balanced BST consider the tree whose preorder is lexicographically smallest.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(n)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ |nums| ≤&nbsp;10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">4</sup>&nbsp;≤&nbsp;nums[i] ≤&nbsp;10<sup style="user-select: auto;">4</sup></span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>