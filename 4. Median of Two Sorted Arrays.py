class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in nums2:
            nums1.append(i)
        a=sorted(nums1)
        n=len(a)
        if(n % 2 != 0):
            return float(a[((n+1)//2)-1])
        else:
            return float((a[(n-1)//2]+a[((n-1)//2)+1])/2)
        
