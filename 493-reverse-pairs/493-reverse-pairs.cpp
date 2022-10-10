class Solution {
public:
    int merge(int left,int mid,int right,vector<int> &nums) {
        int cnt = 0;
        int j = mid + 1;
        for(int i=left;i<=mid;i++) {
            while(j <= right and nums[i] > 2LL * nums[j]) j++;
            cnt += (j - (mid+1));
        }
        
        vector<int> tmp;
        int low = left,high = mid+1;
        while(low <= mid and high <= right) {
            if(nums[low] <= nums[high]) {
                tmp.push_back(nums[low]);
                low++;
            }else{
                tmp.push_back(nums[high]);
                high++;
            }
        }
        
        while(low <= mid) tmp.push_back(nums[low++]);
        while(high <= right) tmp.push_back(nums[high++]);
        
        for(int i=left;i<=right;i++) {
            nums[i] = tmp[i-left];
        }
        
        return cnt;
    }
    int mergeSort(int left,int right,vector<int> &nums) {
        if(left >= right) return 0;
        int mid = left + (right - left)/2;
        int inc = 0;
        inc += mergeSort(left,mid,nums);
        inc += mergeSort(mid+1,right,nums);
        
        inc += merge(left,mid,right,nums);
        
        return inc;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(0,nums.size()-1,nums);
    }
};