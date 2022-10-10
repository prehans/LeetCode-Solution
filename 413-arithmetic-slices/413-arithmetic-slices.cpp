class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int solve = 0;
        int diff = 0;
        int from = 0;
        for (int to = 1; to < nums.size(); to++) {
            int localDiff = nums[to] - nums[to - 1];
            if (localDiff != diff) {
                from = to - 1;
                diff = localDiff;
            }
            if (to - from + 1 >= 3) {
                solve += to - from - 1;
            }
        }
        return solve;
    }
};