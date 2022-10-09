class Solution {
public:
    int ans = 0;
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& res) {
       unordered_map<int,vector<int>> adj;
        unordered_set<int> uset(res.begin(),res.end());
        for(auto it : edges) {
            if(uset.count(it[0]) > 0 or uset.count(it[1]) > 0) continue;
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        
        vector<bool> vis(n,false);
        
        if(uset.count(0) > 0) return 0;
        
        ans = 1;
        
        dfs(0,adj,uset,vis);
        
        return ans;
    }
    
    void dfs(int n,unordered_map<int,vector<int>> &umap,unordered_set<int> &uset,vector<bool> &vis)     {
                
        vis[n] = true;
        
        for(auto it : umap[n]) {
            if(vis[it] == false) {
                ans += 1;
                dfs(it,umap,uset,vis);
            }
        }
        
                
    }
};