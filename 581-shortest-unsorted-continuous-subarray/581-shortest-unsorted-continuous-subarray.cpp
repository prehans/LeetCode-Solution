class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start = -1,end = -1,maxi = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(maxi > nums[i]) {
                if(start == -1) start = i-1;
                while(start-1 >= 0 and nums[start-1] > nums[i]) start--;
                end = i+1;
            }else{
                maxi = nums[i];
            }
        }
        
        return end - start;
    }
};