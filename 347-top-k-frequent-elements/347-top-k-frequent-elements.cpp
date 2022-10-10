class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap; //<number,freq>
        for(int i=0;i<nums.size();i++) umap[nums[i]]++;
        
        vector<int> ans;
        while(k--){
            int maxFreq = INT_MIN;
            int maxAns;
            for(auto i : umap){
                if(i.second > maxFreq){
                    maxFreq = i.second;
                    maxAns = i.first;
                }
            }
            umap[maxAns] = -1;
            ans.push_back(maxAns);
        }
        return ans;
    }
};