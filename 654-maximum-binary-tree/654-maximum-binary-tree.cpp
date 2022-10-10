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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        return dfs(left,right,nums);
    }
    
    TreeNode *dfs(int left,int right,vector<int> &nums) {
        
        if(left > right) return NULL;
        
        int index = max_element(nums.begin()+ left,nums.begin()+ right+1) - nums.begin();
                
        TreeNode *root = new TreeNode(nums[index]);
        
        root->left = dfs(left,index-1,nums);
        root->right = dfs(index+1,right,nums);
        
        
        return root;
    }
};