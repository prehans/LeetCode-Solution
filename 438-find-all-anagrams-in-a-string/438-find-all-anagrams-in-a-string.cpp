class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int> mapper,temp;
        vector<int> ans;
        for(int i=0;i<p.size();i++){
            mapper[p[i]]++;
        }
        
        int i=0,j=0;
        while(j<s.size()){
            temp[s[j]]++;
            
            if(j-i+1 == p.size()){
                if(temp == mapper){
                    ans.push_back(i);
                }
                if(temp[s[i]] == 1){
                    temp.erase(s[i]);
                }else{
                    temp[s[i]]--;
                }
                i++;
            }
            
            j++;
        }
        return ans;
        
    }
};