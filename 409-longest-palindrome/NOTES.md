```
class Solution {
public:
int longestPalindrome(string s) {
unordered_map<char,int> umap;
for(char c : s) umap[c]++;
int len = 0;
for(auto it : umap) {
if(it.second % 2 == 0) {
len += it.second;
umap[it.first] = 0;
}else if(it.second > 2) {
len += it.second-1;
it.second = 1;
}
}
for(auto it : umap) {
if(it.second > 0) {
len++;
break;
}
}
return len;
}
};
```