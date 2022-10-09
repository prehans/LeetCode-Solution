class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
       unordered_map<int,int> umap;
        if(items1.size() < items2.size()) {
            vector<vector<int>> temp = items1;
            items1 = items2;
            items2 = temp;
        }
            
        for(auto it : items2) 
            umap[it[0]] = it[1];

        
        vector<vector<int>> ans;
        
        for(auto it : items1) {
            vector<int> temp(2,0);
            temp[0] = it[0];
            temp[1] = it[1];
            if(umap.count(it[0]) > 0) {
                temp[1] += umap[it[0]];
                umap[it[0]] = -1;
            }
            
            ans.push_back(temp);
        }
        
        for(auto it : umap) {
            if(it.second != -1) {
                ans.push_back({it.first,it.second});
            }
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};