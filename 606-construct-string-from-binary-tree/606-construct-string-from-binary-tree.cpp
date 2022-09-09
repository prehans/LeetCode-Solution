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
   
    string tree2str(TreeNode* root)
    {
        if(root==NULL)
            return " ";
        string str=to_string(root->val);
        if(!root->left and !root->right)
            str=str+"";
        if(root->left)
          str+="("+tree2str(root->left)+")";
        if(root->right and !root->left)
            str=str+"()";
        if(root->right)
            str=str+"("+tree2str(root->right)+")";
        return str;
    }
};