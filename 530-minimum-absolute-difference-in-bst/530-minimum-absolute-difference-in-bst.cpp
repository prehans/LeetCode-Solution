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
    int diff = INT_MAX;
    void inorder(TreeNode *root,int &prev) {
        if(root) {
            inorder(root->left,prev);
            
            if(prev == INT_MAX) {
                prev = root->val;
            }else{
                diff = min(diff,root->val - prev);
                prev = root->val;
            }
            
            inorder(root->right,prev);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        int prev = INT_MAX; 
        inorder(root,prev);
        return diff;
    }
};