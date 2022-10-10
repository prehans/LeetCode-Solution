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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        queue<pair<TreeNode *,int>> q;  //queue stores node and it's index
        q.push({root,0});
        while(!q.empty()){
            int size = q.size();
            int index = q.front().second;
            int first,last;
            for(int i=0;i<size;i++){
                long long int curr_index = q.front().second-index;
                root = q.front().first;
                q.pop();
                if(i==0) first = curr_index;
                if(i==size-1) last = curr_index;
                if(root->left) q.push({root->left,curr_index*2+1});
                if(root->right) q.push({root->right,curr_index*2+2});
            }
            ans = max(ans,last-first+1);
        }
        return ans;
        
    }
};