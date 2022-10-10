class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        
        int i=num1.size()-1,j=num2.size()-1;
        string s = "";
        
        while(i>=0 or j>=0) {
            
            int x=0,y=0;
            
            if(i >= 0) x = num1[i] - 48;
            if(j >= 0) y = num2[j] - 48;
            
            int sum = x+y+carry;
            string num = to_string(sum%10);
            
            s += num;
            
            carry = sum/10;
            
            i--;
            j--;
            
        }
        
        if(carry != 0) {
            string str = to_string(carry);
            s += str;
        }
        
        reverse(s.begin(),s.end());
        
        return s;
    }
};