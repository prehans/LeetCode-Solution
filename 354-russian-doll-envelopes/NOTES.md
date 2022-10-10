##### DP (LIS)
```
class Solution {
public:
int maxEnvelopes(vector<vector<int>>& envelopes) {
sort(envelopes.begin(),envelopes.end());
vector<int> dp(envelopes.size());
int omax = 0;
for(int i=0;i<envelopes.size();i++) {
int maxi = 0;
for(int j=0;j<i;j++) {
if(envelopes[j][1] < envelopes[i][1] and envelopes[j][0] < envelopes[i][0]) {
maxi = max(maxi,dp[j]);
}
}
dp[i] = maxi + 1;
omax = max(omax,dp[i]);
}
return omax;
}
};
```