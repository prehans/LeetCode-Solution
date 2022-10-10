```
class Solution {
public:
string removeKdigits(string num, int k) {
if(k == 0) return "0";
stack<char> st;
st.push(num[0]);
for(int i=1;i<num.length();++i){
while(k > 0 and !st.empty() and num[i] < st.top()){
--k;
st.pop();
}
st.push(num[i]);
if(st.size() == 1 and st.top() == '0') //removing leading zeros
st.pop();
}
while(k and !st.empty()){  //if given num is sorted eg : 112
st.pop();
--k;
}
string res = "";
while(!st.empty()) {
res.push_back(st.top());
st.pop();
}
reverse(res.begin(),res.end());
return res.length() > 0 ? res : "0";
}
};
```