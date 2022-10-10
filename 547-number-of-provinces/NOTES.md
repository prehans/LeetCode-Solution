BFS
​
```
class Solution {
public:
int findCircleNum(vector<vector<int>>& isConnected) {
unordered_map<int,vector<int>> adj;
int n = 0;
for(int i=0;i<isConnected.size();i++) {
n++;
for(int j=0;j<isConnected.size();j++) {
if(j == n-1 or isConnected[i][j] == 0) continue;
adj[n].push_back(j+1);
}
if(adj[n].size() == 0) adj[n] = {};
}
vector<bool> visited(isConnected.size()+1,false);
int prov = 0;
for(int i=1;i<visited.size();i++) {
queue<int> q;
if(visited[i] == false) {
prov += 1;
q.push(i);
visited[i] = true;
}
while(!q.empty()) {
int node = q.front(); q.pop();
for(auto it : adj[node]) {
if(visited[it] == false) {
visited[it] = true;
q.push(it);
}
}
}
}
return prov;
}
};
```