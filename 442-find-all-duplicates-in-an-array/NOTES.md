```
class Solution {
public:
vector<int> findDuplicates(vector<int>& nums) {
vector<bool> hash(nums.size(),false);
vector<int> ans;
for(int i=0;i<nums.size();i++) {
if(hash[nums[i]] == true) ans.push_back(nums[i]);
hash[nums[i]] = true;
}
return ans;
}
};
```