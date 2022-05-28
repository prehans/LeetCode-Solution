class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            auto it=find(nums.begin(),nums.end(),i);
            if(it==nums.end())
            {
                return i;
            }
        }
        return {};
    }
};