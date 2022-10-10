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
    
    int findBottomLeftValue(TreeNode* root) {
        int  currLevel = 0,maxLevel = -1,ans = -1;
        dfs(root,currLevel,maxLevel,ans);
        return ans;
    }
    
    void dfs(TreeNode *root,int currLevel,int &maxLevel,int &ans) {
        if(!root) return;
        
        dfs(root->left,currLevel+1,maxLevel,ans);
        dfs(root->right,currLevel+1,maxLevel,ans);
        
        if(currLevel > maxLevel) {
            maxLevel = currLevel;
            ans = root->val;
        }
    }
};