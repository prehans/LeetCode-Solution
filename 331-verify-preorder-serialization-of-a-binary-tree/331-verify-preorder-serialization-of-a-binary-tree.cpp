class Solution {
public:
    bool isValidSerialization(string preorder) {
        preorder.push_back(',');
        int size = preorder.size();
        int capacity = 1;
        
        for(int i=0;i<size;i++) {
            
            if(preorder[i] != ',') continue;
            
            capacity--;
            if(capacity < 0) return false;
            if(preorder[i-1] != '#') capacity += 2;
            
        }
        
        return capacity==0;
    }
};