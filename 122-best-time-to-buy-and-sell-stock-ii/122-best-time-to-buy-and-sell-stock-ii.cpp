class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
      int mins=prices[0];
        int maxs=prices[0];
        int prof=0;
        int flag=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<prices[i-1])
            {
                prof+=prices[i-1]-mins;
                mins=prices[i];            }
            else
            {
                if(i==n-1)
                   prof+=(prices[i]-mins); 
               mins=min(mins,prices[i]);
            }
        }
        return prof;
        
    }
};