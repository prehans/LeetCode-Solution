class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int rembytes=0;
       for(int var: data)
       { 
           if(rembytes==0)
           {
           if((var>>7)==0b0)
               rembytes=0;
           else if((var>>5)==0b110)
               rembytes=1;
           else if((var>>4)==0b1110)
               rembytes=2;
           else if((var>>3)==0b11110)
               rembytes=3;
               else 
                   return false;
           }
           else
           {
               if((var>>6)==0b10)
                   rembytes--;
               else
                   return false;
           }
       }
        if(rembytes!=0)
            return false;
        return true;
    }
};