class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int choco1=INT_MAX;
        int choco2=INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
              if(prices[i]<choco1)
              {
                choco2=choco1;
                choco1=prices[i];
              }
              else
              {
                choco2=min(choco2,prices[i]);
              }
        }
         
        int bal=money-(choco1+choco2);

        if(bal>=0)return bal;
        
        return money;
    }
};