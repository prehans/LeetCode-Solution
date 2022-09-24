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
    vector<vector<int>>ans;
    vector<int>vt;
  
    void Sum(TreeNode *root, int targetSum)
    {
        if(root==NULL)
            return ;
        targetSum=targetSum-root->val;
        vt.push_back(root->val);
        if(root->left==NULL and root->right==NULL and targetSum==0)
        {
            ans.push_back(vt);
        }
       Sum(root->left,targetSum);
       Sum(root->right,targetSum);
        vt.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        Sum(root , targetSum);
        return ans;
    }
};