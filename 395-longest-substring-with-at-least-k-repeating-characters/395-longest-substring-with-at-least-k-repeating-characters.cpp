class Solution {
public:
    int longestSubstring(string s, int k) {
        return dfs(s,0,s.length(),k);
    }
    
    int dfs(string s,int start,int end,int k) {
        if(end - start < k) return 0;
        
        unordered_map<char,int> umap;
        for(int i=start;i<end;i++) {
            umap[s[i]]++;
        }
        
        
        for(int i=start;i<end;i++) {
            if(umap[s[i]] < k) {
                int j = i+1;
                
                while(j<end and umap[s[j]] < k) j++;
                
                return max(dfs(s,start,i,k),dfs(s,j,end,k));
            }
        }
        
        return end- start;
    }
};


//  cababb