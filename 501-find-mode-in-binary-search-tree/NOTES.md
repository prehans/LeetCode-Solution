```
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
void dfs(TreeNode *root, unordered_map<int,int> &umap) {
if(root) {
umap[root->val]++;
dfs(root->left,umap);
dfs(root->right,umap);
}
}
vector<int> findMode(TreeNode* root) {
unordered_map<int,int> umap;
dfs(root,umap);
int maxi = INT_MIN;
​
vector<int> ans;
for(auto it : umap) {
if(maxi < it.second){
maxi = it.second;
ans.clear();
}
if(it.second == maxi) ans.push_back(it.first);
}
return ans;
}
};
```