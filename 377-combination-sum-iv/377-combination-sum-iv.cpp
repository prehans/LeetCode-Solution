class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        return dfs(nums,target,umap);
    }
    int dfs(vector<int> &nums,int target,unordered_map<int,int> &umap){
        if(target <= 0){
            if(target == 0) return 1;
            return 0;
        }
        
        if(umap.count(target) > 0) return umap[target];
        
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans += dfs(nums,target-nums[i],umap);
        }
        
        return umap[target] = ans;
    }
};