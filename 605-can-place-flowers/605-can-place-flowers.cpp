class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int check = 0;
        
        if(n == 0) return true;
        
        if(flowerbed.size() == 1) {
            if(flowerbed[0] == 0) check++;
            return check == n;
        }
        
        for(int i=0;i<flowerbed.size();i++) {
            if(flowerbed[i] == 1) continue;
            
            if((i == 0 and flowerbed[i+1] == 0) || 
               (i == flowerbed.size()-1 and flowerbed[i-1] == 0)) {
                flowerbed[i] = 1;
                check++;
            }
            if(i != 0 and i != flowerbed.size()-1 and flowerbed[i-1] == 0 and flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                check++;
            }
                
        }
        
        return check >= n;
    }
};