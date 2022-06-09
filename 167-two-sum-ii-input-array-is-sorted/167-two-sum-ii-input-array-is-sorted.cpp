class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>vt;
        int n=numbers.size();
        int l=0, r=n-1;
        while(l<r)
        {
            if(numbers[l]+numbers[r]==target)
            {
                vt.push_back(l+1);
                vt.push_back(r+1);
                break;
            }
            else if(numbers[l]+numbers[r]<target)
            {
                l++;
            }
            else if(numbers[l]+numbers[r]>target)
            {
                r--;
            }
        }
        return vt;
    }
};