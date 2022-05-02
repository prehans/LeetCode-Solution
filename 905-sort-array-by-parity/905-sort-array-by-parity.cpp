class Solution {
    vector<int> v1,v2,v3;
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            v1.push_back(nums[i]);
            else 
            v2.push_back(nums[i]);
        }
        int k=v1.size();
        int m=v2.size();
        for(int i=0;i<k;i++)
          v3.push_back(v1[i]);
        for(int j=0;j<m;j++)
            v3.push_back(v2[j]);
        
        return v3;
        
    }
};