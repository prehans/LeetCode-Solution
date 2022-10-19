class Solution {
public:
    //very very good question on the kadane's algorithm 
    //kadane's +greedy
    int kadane(vector<int>&a,vector<int>&b){
        
        vector<int>c;
        for(int i=0;i<a.size();i++){
            
            c.push_back(a[i]-b[i]);
        }
        int d =0;
        int ans=0;
        for(int i=0;i<c.size();i++){
            
            d=d+c[i];
            if(d<0){
                d=0;
            }
            ans=max(ans,d);
        }
        
        return ans;
        
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        
        
        int sum1=0,sum2=0;
        for(int i=0;i<nums1.size();i++){
            
            sum1+=nums1[i];
            sum2+=nums2[i];
        }
        int a=kadane(nums1,nums2);
        int b=kadane(nums2,nums1);
  
        return max(sum1+b,sum2+a);
      
        
        
    }
};
