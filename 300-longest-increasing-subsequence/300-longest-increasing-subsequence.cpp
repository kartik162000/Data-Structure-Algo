class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        if(nums.size()==1)
            return dp[0];
        int maxx=0;
        for(int i=1;i<nums.size();i++)
        {
            int max_len=0;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    max_len=max(max_len,dp[j]);
                }
            }
            dp[i]=max_len+1;
            maxx=max(maxx,dp[i]);
        }
       return maxx;
    }
};