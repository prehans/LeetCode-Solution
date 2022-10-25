class Solution {
    public int removeElement(int[] nums, int val) {
          int nextPos = 0;
    
        for(int i=0; i<nums.length; i++) {
            if(nums[i] != val) {
                nums[nextPos] = nums[i];
                nextPos++;
            }
         }
        return nextPos;   
    }
}
