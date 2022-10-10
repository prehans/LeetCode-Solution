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
    int maxFreq = 0,currFreq = 0,precursor = INT_MIN;
    vector<int> ans;
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
    
    void inorder(TreeNode *root) {
        if(!root) return;
        
        inorder(root->left);
        
        if(precursor == root->val) currFreq++;
        else currFreq = 1;
        if(currFreq > maxFreq) {
            ans.clear();
            maxFreq = currFreq;
            ans.emplace_back(root->val);
        }else if(currFreq == maxFreq){
            ans.emplace_back(root->val);
        }
        
        precursor = root->val;
        
        inorder(root->right);
    }
};