class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> set;
        int ans=0,curr=0;
        for(int i=0,j=0;j<nums.size();j++)
        {
            while(set.find(nums[j])!=set.end())
            {
                set.erase(nums[i]);
                curr=curr-nums[i];
                i++;
            }
            set.insert(nums[j]);
            curr=curr+nums[j];
            ans=max(ans,curr);
        }
        return ans;
    }
};