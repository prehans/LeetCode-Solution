class Solution:
    def myAtoi(self, s: str) -> int:
        val = 0 # value to return
        sign = 1 # the sign
        s=s.strip()
        try:
            i = 0                
            # check if prefixed by sign
            if   s[i] == '-': 
                sign = -1
                i +=  1
            elif s[i] == '+': 
                sign =  1
                i += 1
                
            # convert string to number
            while '0' <= s[i] <= '9':
                val = val * 10 + ord(s[i]) - ord('0')
                i += 1
            
        finally:
            # do the overflow fix
            return min(max(val * sign, -2147483648), 2147483647)
    
