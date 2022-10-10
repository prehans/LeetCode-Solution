```
class Solution {
public:
bool isValidSerialization(string preorder) {
if(preorder == "#") return true;
stack<pair<string,int>> st;
stringstream s(preorder);
while(s.good()) {
string str;
getline(s,str,',');
if(st.empty() and str != "#") {
st.push({str,2});
}else{
while(!st.empty() and st.top().second == 0) st.pop();
if(st.empty()) return false;
st.top().second--;
if(str != "#") st.push({str,2});
}
}
while(!st.empty() and st.top().second == 0) st.pop();
return st.empty();
}
};
```