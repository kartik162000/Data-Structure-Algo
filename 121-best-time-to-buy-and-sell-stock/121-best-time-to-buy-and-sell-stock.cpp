class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int mins=INT_MAX;
        int profit=0;
        for(int i=0;i<v.size();i++)
        {
            mins=min(mins,v[i]);
            profit=max(profit,v[i]-mins);
        }
        return profit;
    }
};