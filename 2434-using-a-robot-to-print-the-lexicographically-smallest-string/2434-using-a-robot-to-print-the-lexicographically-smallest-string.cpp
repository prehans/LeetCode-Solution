class Solution {
public:
    string robotWithString(string s) {
        stack<char> st;
        
        string ans;
        int freq[26] = {0};
        int lo = 0;
        
        for(char it : s) freq[it - 'a']++;
        
        for(auto it : s) {
            st.push(it);
            
            freq[it - 'a']--;
            
            while(lo < 26 and freq[lo] == 0) lo++;
            
            while(!st.empty() and st.top() <= lo+'a') {
                ans.push_back(st.top());
                st.pop();
            }
        }
        
        return ans;
        
    }
};