class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int mid = nums.size()/2;
        
        int val = nums[mid];
        
        int minMove = 0;
        for(int i=0;i<nums.size();i++) {
            minMove += abs(val - nums[i]);
        }
        
        return minMove;
    }
};