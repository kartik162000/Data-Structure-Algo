class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int max_i=*max_element(nums.begin(),nums.end());
        
        vector<int> freq(max_i+1);
        for(auto x:nums)
            freq[x]++;
        
    vector<int> dp(max_i+1);
        dp[0]=0;
        dp[1]=freq[1];
        dp[2]=max(freq[1],2*freq[2]);
        for(int i=3;i<=max_i;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+freq[i]*i);
        }
                return dp[max_i];
      
        
        
    }
};