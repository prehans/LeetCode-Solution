class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0;
        int count;
        unordered_map<int,int> hash; //<no,freq>
        hash[0] = 1;
        for(auto it : nums){
            prefixSum += it;
            
            if(hash.find(prefixSum-k) != hash.end()){
                count +=hash[prefixSum-k];
            }
            
            hash[prefixSum]++;
        }
        
        return count; 
    }
};