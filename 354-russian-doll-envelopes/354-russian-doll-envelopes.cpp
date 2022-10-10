class Solution {
public:
    static bool comp(vector<int>& A,  vector<int>& B){
        if(A[0] == B[0]){
            return A[1] > B[1];
        } 
        return A[0] < B[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),comp);
        
        vector<int> dp(envelopes.size());
        int omax = 0;
        
        for(int i=0;i<envelopes.size();i++) {
            int index = binarySearch(dp,0,omax,envelopes[i][1]);
            
            dp[index] = envelopes[i][1];
            
            if(index == omax) {
                omax++;
            }
        }
        
        return omax;
    }
    
    int binarySearch(vector<int> &nums,int left,int right,int target) {
        while(left < right) {
            int mid = left + (right - left)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid+1;
            else right = mid;
        }
        
        return left;
    }
};