class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int l=0,r=0,sum=0,flag=0;
        int n=nums.size();
        for(int i=0;i<=n-2;i++){
            sum=sum+nums[i];
            l=i;
            for(int j=i+1;j<n;j++){
                sum=sum+nums[j];
                if(sum==target)
                {
                    r=j;
                    flag=1;
                    break;
                }
                else{
                    sum=sum-nums[j];
                }
            }
            if(flag==1){
                break;  
            }
             sum=0;
        }
        
        vector<int>v(2);
         v[0]=l;
         v[1]=r;
        
        return v;
        
        
    }
};