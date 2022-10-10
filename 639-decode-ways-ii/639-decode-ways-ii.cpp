class Solution {
public:
    int mod = 1e9 + 7;
    int numDecodings(string s) {
        vector<long long> cache(s.length()+1,1);
        
        for(int index=s.length()-1;index >=0;index--) {
            long long res = 0;
            
            if(s[index] == '0') {
                cache[index] = 0;
                continue;
            }
            
            if(s[index] == '*')
                res = 9*cache[index+1]%mod;
            else 
                res = cache[index+1]%mod;
        
            long long tmp = 0;
            if(index+1 < s.length()) {
                if(s[index] == '*' and s[index+1] == '*') {
                    tmp += 15*cache[index+2]%mod;
                }else if((s[index] == '1' or s[index] == '2') and s[index+1] == '*') {
                    tmp += (s[index] == '1' ? 9 : 6) * cache[index+2]%mod;
                }else if(s[index] == '1' or (s[index] == '2' and s[index+1] - '0' <= 6)) {
                    tmp += cache[index+2]%mod;
                }else if(s[index] == '*') {
                    tmp += (s[index+1] - '0' <= 6 ? 2 : 1)*cache[index+2]%mod;
                }
            }
        
            res = (res+tmp) % mod; 
            cache[index] = res;
        }
        
        return cache[0];
    }
};
