class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>vt;
        int sum=0;
        for(auto x: nums)
        {
            if(x%2==0)
                sum=sum+x;
        }
        for(int i=0;i<n;i++)
        {
        if(abs(nums[queries[i][1]])%2==0 and abs(queries[i][0])%2==0)
        {
            sum=sum+queries[i][0];
            nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
        }
        else if(abs(nums[queries[i][1]])%2!=0 and abs(queries[i][0])%2!=0)
        {
            sum=sum+nums[queries[i][1]]+queries[i][0];
            nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
        }
        else if(abs(nums[queries[i][1]])%2==0 and abs(queries[i][0])%2!=0)
        {
            sum=sum-nums[queries[i][1]];
            nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
        }
        else
        {
            nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
        }
        vt.push_back(sum);
        }
        
  return vt;  
    }
};