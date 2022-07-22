class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins=INT_MAX;
        int maxs=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            mins=min(mins,prices[i]);
            maxs=max(maxs,prices[i]-mins);
        }
        return maxs;
    }
};