class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        unordered_map<int,vector<int>> adj;
        
        for(int i=0;i<graph.size();i++) {
            for(auto it : graph[i]) {
                adj[i].push_back(it);
            }
        }
        
        vector<int> colored(graph.size(),-1);
        
        for(int i=0;i<colored.size();i++) {
            if(colored[i] == -1) {
                if(!bfs(i,adj,colored)) return false;
            }
        }
        
        return true;
    }
    
   bool bfs(int node,unordered_map<int,vector<int>> &adj,vector<int> &color) {
       
       queue<int> q;
       q.push(node);
       color[node] = 1;
       
       while(!q.empty()) {
           int curr_node = q.front(); q.pop();
           
           for(auto child : adj[curr_node]) {
               if(color[child] == -1) {
                   color[child] = 1 - color[curr_node];
                   q.push(child);
               }else if (color[curr_node] == color[child]) {
                   return false;
               }
           }
       }
       
       return true;
   }
};