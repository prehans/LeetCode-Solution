/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        if(!root) return {};
        
        queue<Node*> q;
        q.push(root);
        
        vector<vector<int>> ans;
        while(!q.empty()) {
            int size = q.size();
            vector<int> tmp;
            for(int i=0;i<size;i++) {
                Node *curr = q.front(); q.pop();
                tmp.push_back(curr->val);
                
                for(auto it : curr->children) q.push(it);
            }
            
            ans.push_back(tmp);
        }
        
        return ans;
    }
};