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
    vector<int> res;
    vector<int> largestValues(TreeNode* root) {
        pre(root,1);
        return res;
    }
    
    void pre(TreeNode* root,int level) {
        if(!root) return;
        
        if(res.size() < level) res.push_back(root->val);
        else res[level-1] = max(res[level-1],root->val);
        
        pre(root->left,level+1);
        pre(root->right,level+1);
    }
};