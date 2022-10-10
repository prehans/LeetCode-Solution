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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth == 1) {
            TreeNode *node = new TreeNode(val);
            node->left = root;
            return node;
        }
        
        queue<TreeNode *> q;
        q.push(root);
        
        int level = 0;
        
        while(!q.empty()) {
            level++;
            if(level == depth-1) break;
            
            int size = q.size();
            
            for(int i=0;i<size;i++) {
                TreeNode *node = q.front(); q.pop();
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        
        while(!q.empty()) {
            TreeNode * node = q.front(); q.pop();
            

            TreeNode *temp_l = node->left;
            TreeNode *fresh_l = new TreeNode(val);
            node->left = fresh_l;
            fresh_l->left = temp_l;

            

            TreeNode *temp_r = node->right;
            TreeNode *fresh_r = new TreeNode(val);
            node->right = fresh_r;
            fresh_r->right = temp_r;

        }
        
        return root;
        
    }
};