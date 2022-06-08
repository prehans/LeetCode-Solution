class Solution {
public:
    int removePalindromeSub(string s) {
        int n=s.length();
        if(n==0)
            return 0;
        int l=0,r=n-1;
        while(l<n)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else
            {
                return 2;
            }
        }
        return 1;
    }
};