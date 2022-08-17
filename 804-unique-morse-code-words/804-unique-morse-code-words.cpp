class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        set<string>st;
        for(int i=0;i<words.size();i++)
        {
            string s;
            for(int j=0;words[i][j]!='\0';j++)
            {
                s=s+arr[(words[i][j]-'a')];
            }
            st.insert(s);
        }
        return st.size();
    }
};