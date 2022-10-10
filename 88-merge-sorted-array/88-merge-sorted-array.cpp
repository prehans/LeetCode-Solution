class Solution {
public:
  /**
    * Approach -:
    * There would be two pointer i,j that would point the nums1(ignoring 0s part) and nums2 arrays' from back.
    * There would be another pointer c which would point to the actual back (m+n-1) of nums1.
    * Now, I would compare elements at i and j of nums1 and nums2 respectively and whichever is greater I will put that at c.
    * Time Complexity -: O(n+m)
    * Auxillary Space Complexity -: O(1)
    */
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i  = m-1;
        int j = n-1;
        int c = m+n-1;
        while (i>=0 && j>=0) {
            if (nums1[i] >=nums2[j]) nums1[c] = nums1[i--];
            else nums1[c] = nums2[j--];
            c--;
        }
        while (i>=0) nums1[c--] = nums1[i--];
        while (j>=0) nums1[c--] =nums2[j--];
    }
};
