class Solution {
public:
    string reverseWords(string s) {
       int n=s.size(),last=0;
        s.push_back(' ');
        for(int i=0;i<=n;++i)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+last,s.begin()+i);
            last=i+1;
            }
        }
        s.pop_back();
        return s;
    }
};