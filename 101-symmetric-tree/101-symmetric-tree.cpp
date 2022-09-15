/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool mirror(TreeNode * rootL , TreeNode *rootR)
    {
        if(rootL==NULL and rootR==NULL)
            return true;
        else
        {
            if(rootL!=NULL and rootR!=NULL)
            {
        if(rootL->val==rootR->val)
            return (mirror(rootL->left , rootR->right) and mirror(rootL->right , rootR->left));
        }
        return false;
    }
}
public:
    bool isSymmetric(TreeNode* root) 
    {
       return mirror(root->left,root->right);
    }

};