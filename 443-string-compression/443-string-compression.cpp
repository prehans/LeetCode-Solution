class Solution {
public:
    int compress(vector<char>& chars) {
        int left = 0;
        int right = 0;
        
        string s = "";
        
        while(right <= chars.size()) {
            while(right < chars.size() and chars[left] == chars[right]) {
                right++;
            }
            
            int dist = right - left;
            
            if(dist == 1) {
                s.push_back(chars[left]);
                left = right;
            }else{
                s.push_back(chars[left]);
                string x = to_string(dist);
                s += x;
                left = right;
            }
            
            right++;
        }
        
        chars.clear();
        
        for(auto it : s) {
            chars.push_back(it);
        }
                                
        return s.length();
        
    }
};


/*
    Example 1 :
        l
    01234567
    aabbccc
           r
    
    s = a2b2c3
    
    return 6
    
    Example 2 : 
    
     l
    0123456789 10 11 12 13
    abbbbbbbbb b  b  b
                        r
    
    s = ab12
    
*/