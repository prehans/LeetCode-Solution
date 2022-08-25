class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      
     vector<int>vt(26);
        for(char ch : magazine)
        {
            vt[ch-'a']++;
        }
        for(char ch : ransomNote)
        {
            vt[ch-'a']--;
            if(vt[ch-'a']<0)
                return false;
        }
        return true;
    }
};