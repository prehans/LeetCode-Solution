```
class Solution {
public:
bool detectCapitalUse(string word) {
if(word.length() == 1) return true;
bool isCapital = false;
if(word[1] >= 'A' && word[1] <= 'Z') isCapital = true;
for(int i=2;i<word.length();i++){
if(word[i] >= 'A' && word[i] <= 'Z' && isCapital == false) return false;
else if(word[i] >= 'a' && word[i] <= 'z' && isCapital == true) return false;
}
if(isCapital == true && word[0] >= 'a' && word[0] <= 'z') return false;
return true;
}
};
```