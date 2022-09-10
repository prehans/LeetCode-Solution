class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int min=INT_MAX;
        int profit=0;
        int index;
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                min=prices[i];
               // index=i;
            }
  //      }
  //      for(int j=index+1;j<prices.size();j++)
      //  {
           else if(profit<prices[i]-min)
            {
                profit=prices[i]-min;
            }
        }
        return profit;
        
    }
};