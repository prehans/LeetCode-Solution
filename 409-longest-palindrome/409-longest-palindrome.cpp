class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> umap;
        
        for(char c : s) umap[c]++;
        
        int len = 0;
        
        for(auto it : umap) {
            len += it.second/2;
        }
        
        return 2*len+1 < s.length() ? 2*len+1 : s.length();
    }
};