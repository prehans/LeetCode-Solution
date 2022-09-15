class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>vt;
     map<int,int>mp;
       // sort(changed.begin(),changed.end());
        for(auto x:changed)
        {
            mp[x]++;
        }
       sort(changed.begin(),changed.end());
        for(auto x:changed)
        {
            if(mp[x]>0)
            {
                mp[x]--;
            if(mp[x*2]>0)
            {
                mp[x*2]--;
            vt.push_back(x);
            }
            else
            {
               return{};
            } 
            }
        }
        return vt;
    }
};