class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++)
        {
            bool flag=false;
            char pref=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=pref)
                {
                    flag=true;
                }
            }
            if(flag)return ans;
                ans+=pref;
        }return ans;    
    }
};
