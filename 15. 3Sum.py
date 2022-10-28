class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        nums.sort()
        r = []
        def twoSum(i, j, target):
            r = []
            while i < j:
                s = nums[i] + nums[j]
                if s < target:
                    i += 1
                elif s > target:
                    j -= 1
                else:
                    if not r or nums[i] != r[-1][0]:
                        r.append((nums[i], nums[j]))
                    i += 1
                    j -= 1
            return r
                
        for i in range(n):
            if i and nums[i] == nums[i - 1]:
                continue
            two_sums = twoSum(i + 1, n - 1, -nums[i])
            for b, c in two_sums:
                r.append([nums[i], b, c])
        return r
            
        
