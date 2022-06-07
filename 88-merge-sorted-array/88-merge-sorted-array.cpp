class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>vt;
        for(int i=0;i<m;i++)
            vt.push_back(nums1[i]);
        for(int i=0;i<n;i++)
            vt.push_back(nums2[i]);
        
        sort(vt.begin(),vt.end());
        for(int i=0;i<n+m;i++)
            nums1[i]=vt[i];
    }
};