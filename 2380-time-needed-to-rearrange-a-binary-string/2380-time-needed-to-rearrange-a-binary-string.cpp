class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int seconds = 0;
        int no = 0;
        
        for(auto it : s)
            if(it == '1') no++;
        
        
        while(true) {
            int tmp = 0;
            for(auto it : s) {
                if(it == '0') break;
                tmp++;
            }
            
            if(tmp == no) break;
            
            seconds++;
            
            int i=0;
            while(i<s.length()) {
                if(i != s.length()-1 and s[i] == '0' and s[i+1] == '1') {
                    swap(s[i],s[i+1]);
                    i = i+2;
                    continue;
                }
                
                i++;
            }
        }
        
        return seconds;
    }
};
