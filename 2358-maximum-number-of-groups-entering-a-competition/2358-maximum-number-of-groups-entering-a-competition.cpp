class Solution {
public:
    int maximumGroups(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int g = 0;
        int p = 0;
        
        int i = 0;
        
        while(i < nums.size()) {
            int x = 0;
            while(i < nums.size() and x <= p) {
                x++;
                i++;
            }
            
            if(x > p) {
                g += 1;
                p = x;
            }
        }
        
        return g;
    }
};

/*

    3 5 6 7 10 12


*/