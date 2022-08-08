class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int>dp(26,0);
        int m=1;
        for(int i=0;i<s.size();i++)
        {
            int c=s[i]-'a';
            int maxs=0;
           for(int j=0;j<26;j++)
           {
               if(abs(c-j)<=k)
                 maxs=max(maxs,dp[j]);
           }
           dp[c]=maxs+1;
        m=max(m,dp[c]);
        }
        return m;
    }
};