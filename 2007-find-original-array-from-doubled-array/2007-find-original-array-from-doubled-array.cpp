class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>vt;
      unordered_map<int,int>mp;
        if(changed.size()%2!=0)
            return{};
        sort(changed.rbegin(),changed.rend());
       for(auto x: changed)
       {
           mp[x]++;
       }
        for(auto x: changed)
        {
            if(mp[x]<=0)
                continue;
            if(x==0 and mp[x]<2)
                continue;
            if(mp[2*x]>0)
            {
                vt.push_back(x);
                mp[x]--;
                mp[2*x]--;
            }
            else if(mp[x/2]>0 and x%2==0)
            {
                vt.push_back(x/2);
                    mp[x]--;
                mp[x/2]--;
            }
        }
      if(vt.size()*2==changed.size())
            return vt;
      return {};
    }
};