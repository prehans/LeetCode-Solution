class Solution {
public:
    int fib(int n) {
        int a=0,b=1,sum=0;
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
         for(int i=1;i<n;i++)
         {
             sum=a+b;
             a=b;
             b=sum;
             
         }
        return sum;
    }
};