class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxs=INT_MIN, mins=INT_MAX;
        for(auto x:prices)
        {
            mins=min(mins,x);
            maxs=max(maxs,x-mins);
        }
        return maxs;
    }
};