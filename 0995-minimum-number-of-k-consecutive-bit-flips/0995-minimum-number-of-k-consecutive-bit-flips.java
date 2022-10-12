class Solution {
    public int minKBitFlips(int[] nums, int k) {
        int n = nums.length,freq=0,ans =0;
        int[] arr = new int[n];
        for(int i=0;i<=n-k;i++){
            if(freq%2==nums[i]){
                freq++;ans++;
                arr[i+k-1]--;
            }
            freq += arr[i];
        }
        for(int i=n-k+1;i<n;i++){
            if(freq%2 == nums[i]) return -1;
            freq += arr[i];
        }
        return ans;
    }
}