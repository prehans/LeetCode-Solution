class Solution {
public:
    int concatenatedBinary(int n) {
        long long m=1e9+7;
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            int l=log2(i)+1;
            ans=((ans<<l) +i)%m;
        }
        
        return ans; 
    }
};