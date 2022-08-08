class Solution {
public:
    int solve(vector<int>& coins,int amount,vector<int> &dp)
    {
        if(amount==0)
            return 0;
        if(dp[amount]!=-1) return dp[amount]; 
        int ans=INT_MAX-1;
        for(auto x:coins)
            if(amount-x>=0)
            ans=min(ans,solve(coins,amount-x,dp)+1);
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1,-1);
        int x=solve(coins,amount,dp);
    if(x==INT_MAX-1) return -1;
        return x;
}
};