/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original,TreeNode* cloned,TreeNode* target)
    {
        TreeNode* num;
        return traverse(original,cloned,target,num);
    }
    TreeNode* traverse(TreeNode* original,TreeNode* cloned,TreeNode* target,TreeNode*&num)
    {
        if(original!=NULL)
        {
           traverse(original->left,cloned->left,target,num);
               if(original==target)
                 {
                  num=cloned;
                 }
             traverse(original->right,cloned->right,target,num);
        }
        return num;
    }
};
