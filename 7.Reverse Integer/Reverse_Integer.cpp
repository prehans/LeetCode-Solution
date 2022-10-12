class Solution {
public:
    int reverse(int x) {
      long int temp = x;
      long int rev=0;
      while(temp!=0)
      {
          int dig = temp %10;
          if((rev > INT_MAX/10) || (rev< INT_MIN/10))
              return 0;
          rev = rev * 10 + dig;
          temp = temp/10;
      }
      return rev;
    }
};