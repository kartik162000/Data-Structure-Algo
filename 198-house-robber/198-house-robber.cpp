class Solution {
public:
    int rob(vector<int>& houses) {
    vector<int>dp(houses.size(),-1);
         if(houses.size()==1)
         return houses[0];
         dp[0]=houses[0];
     if(houses.size()==2)
         return max(houses[0],houses[1]);
     dp[1]= max(houses[0],houses[1]);
     for(int i=2;i<houses.size();i++)
     {
         dp[i]=max(houses[i]+dp[i-2],dp[i-1]);
     }
     return dp[houses.size()-1];
    }
};