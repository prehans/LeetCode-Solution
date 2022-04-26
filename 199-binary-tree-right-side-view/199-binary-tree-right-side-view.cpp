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
    vector<int>vt;
    void right(TreeNode*root,int level)
    {
        if(root==NULL)
            return;
        if(level==vt.size())
            vt.push_back(root->val);
        right(root->right,level+1);
        right(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        right(root,0);
        return vt;
    }
};