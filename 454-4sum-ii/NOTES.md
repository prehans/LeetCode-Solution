}
};
```
​
###  Using Two map
​
```
class Solution {
public:
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
unordered_map<int,int> map1,map2;
int n = nums1.size();
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
map1[nums1[i]+nums2[j]]++;
map2[nums3[i]+nums4[j]]++;
}
}
int count=0;
for(auto it : map1){
int temp = it.first;
if(map2.find(-temp) != map2.end()) count += map2[-temp]*map1[temp];
}
return count;
}
};
```