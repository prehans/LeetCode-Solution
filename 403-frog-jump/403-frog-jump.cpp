class Solution {
public:
    vector<vector<int>> dp;
    bool canCross(vector<int>& stones) {
        unordered_map<int,int> umap;
        for(int i=0;i<stones.size();i++) 
            umap[stones[i]] = i;
        dp.resize(stones.size()+1,vector<int>(stones.size()+1,-1));
        return dfs(0,0,umap,stones);
    }
    
    bool dfs(int index,int k,unordered_map<int,int> &umap,vector<int> &stones) {
        
        if(index == stones.size()-1) return true;
        
        if(dp[index][k] != -1) return dp[index][k];
        
        for(int t=k-1;t<=k+1;t++) {
            if(t > 0 and umap.find(stones[index] + k) != umap.end()) {
                int i = umap[stones[index] + k];
                if(dfs(i,t,umap,stones)) return dp[index][k] = true;
            }
        }
        
        return dp[index][k] = false;
    }
};