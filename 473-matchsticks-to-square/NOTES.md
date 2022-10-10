#### backtracking
​
```
class Solution {
public:
bool makesquare(vector<int>& m) {
int sum = 0;
for(auto it : m) sum+=it;
int length = sum/4;
vector<int> sides(4,0);
if(sum%4 != 0) return false;
sort(m.begin(),m.end(),greater<int>());
return dfs(0,m,sides,length);
}
bool dfs(int i,vector<int> &m,vector<int> &sides,int length) {
if(i == m.size()) return true;
for(int j=0;j<4;j++) {
if(sides[j] + m[i] <= length) {
sides[j] += m[i];
if(dfs(i+1,m,sides,length)) return true;
sides[j] -= m[i];
}
}
return false;
}
};
```