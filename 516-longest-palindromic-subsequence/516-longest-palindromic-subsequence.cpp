class Solution {
public:
    int longestPalindromeSubseq(string s1) {
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int m=s1.size(),n=m;
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<dp.size();i++)
        {
            for(int j=1;j<dp[i].size();j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};