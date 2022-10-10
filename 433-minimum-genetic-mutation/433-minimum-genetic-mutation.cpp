class Solution {
public:
    int minMutation(string start, string end, vector<string>& b) {
        unordered_set<string> bank(b.begin(),b.end());
        
        if(bank.count(end) == 0) return -1;
        
        queue<string> q;
        int dist = 0;
        
        q.push(start);
        bank.insert(start);
        
        while(!q.empty()) {
            int size = q.size();
            
            for(int i=0;i<size;i++) {
                
                string s = q.front(); q.pop();
                if(s == end) return dist;
                
                addWord(s,bank,q);
                
            }
            dist++;
        }
        
        return -1;
    }
    
    void addWord(string word,unordered_set<string> &bank,queue<string> &q) {
        bank.erase(word);
        
        for(int i=0;i<word.size();i++) {
            char tmp = word[i];
            for(char c : string("ACGT")) {
                word[i] = c;
                if(bank.count(word)) {
                    q.push(word);
                    bank.erase(word);
                }
            }
            word[i] = tmp;
        }
    }
};