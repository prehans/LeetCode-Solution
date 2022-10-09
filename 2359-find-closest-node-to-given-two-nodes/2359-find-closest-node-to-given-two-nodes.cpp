class Solution {
private:
    void dfs(int level,int node,vector<int> &edges,vector<int> &umap) {        
        while(node != -1 and umap[node] == -1) {
            umap[node] = level++;
            node = edges[node];
        }
    }
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        
        vector<int> umap1(edges.size(),-1),umap2(edges.size(),-1);        
        
        dfs(0,node1,edges,umap1);
        dfs(0,node2,edges,umap2);

        
        int ans = INT_MAX;
        int index = -1;
        
        for(int i=0;i<edges.size();i++) {
            if (min(umap1[i], umap2[i]) >= 0 && max(umap1[i], umap2[i]) < ans) {
                ans = max(umap1[i], umap2[i]);
                index = i;
            }
        }
        
        return index;
    }
};