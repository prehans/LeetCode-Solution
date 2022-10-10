```
class Solution {
public:
//Backtracking Approch
int countArrangement(int n) {
vector<int> nums(n,0);
for(int i=1;i<=n;i++) nums[i-1] = i;
int ans = dfs(0,nums);
return ans;
}
int dfs(int index,vector<int> &nums) {
if(index == nums.size()) return 1;
​
int ways = 0;
​
for(int i=0;i<nums.size();i++) {
if(nums[i] != -1 and (nums[i]%(index+1) == 0 or (index+1)%nums[i] == 0)) {
int ans = nums[i];
nums[i] = -1;
ways += dfs(index+1,nums);
nums[i] = ans;
}
}
return ways;
}
};
```