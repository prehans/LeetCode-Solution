class Solution:
    def maxArea(self, height: List[int]) -> int:
        n=len(height)
        i=0
        j=n-1
        mxarea=0
        while i<j:
            area=min(height[i],height[j])*(j-i)
            mxarea=max(mxarea,area)
            if height[i]>height[j]:
                j-=1
            else:
                i+=1
        return mxarea
        
