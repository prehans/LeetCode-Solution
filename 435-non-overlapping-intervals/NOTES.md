### DP using LIS
​
```
class Solution {
public:
int eraseOverlapIntervals(vector<vector<int>>& nums) {
sort(nums.begin(),nums.end());
vector<int> dp(nums.size());
int omax = 0;
for(int i=0;i<nums.size();i++) {
int maxi = 0;
for(int j=0;j<i;j++) {
if(nums[i][0] >= nums[j][1])
maxi = max(maxi,dp[j]);
}
dp[i] =  maxi + 1;
omax = max(omax,dp[i]);
}
return nums.size() - omax;
}
};
```