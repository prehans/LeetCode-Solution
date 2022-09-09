class Solution {
public:
   
   static bool comp(vector<int>&a , vector<int>&b)
    {
        if(a[0]!=b[0])
        {
            return a[0]>b[0];
        }
       return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), comp);
        int max=INT_MIN, c=0;
        for(auto p: properties)
        {
            if(max>p[1])
                c++;
            else
                max=p[1];
        }
        return c;
    }
};