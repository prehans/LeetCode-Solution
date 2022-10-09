class Solution {
public:
    string smallestNumber(string pattern) {
        string res,stack;
        for(int i=0;i<=pattern.size();i++) {
            stack.push_back('1' + i);
            if(i == pattern.length() or pattern[i] == 'I') {
                while(!stack.empty()) {
                    res.push_back(stack.back());
                    stack.pop_back();
                }
            }
        }
        
        return res;
    }
};

