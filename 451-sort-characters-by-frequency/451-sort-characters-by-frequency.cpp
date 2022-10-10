class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        for(auto it : s) umap[it]++;
        
        priority_queue<pair<int,char>> pq;
        
        for(auto it : umap) pq.push({it.second,it.first});
        
        string ans = "";
        
        while(!pq.empty()) {
            auto x = pq.top(); pq.pop();
            
            int freq = x.first;
            while(freq--) ans.push_back(x.second);
        }
        
        return ans;
    }
};