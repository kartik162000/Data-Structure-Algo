class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
           return 0;
        if(nums.size()==2)
            return 1;
        vector<int> dp(nums.size(),0);
        dp[nums.size()-1]=0;
       int n=nums.size();
        for(int i=n-2;i>=0;i--) 
        {
            if(nums[i]>0)
            {
                int x;
                int y=i+1+nums[i];
                if(y>nums.size())
                x=*min_element(dp.begin()+i+1,dp.end());
                else
                    x=*min_element(dp.begin()+i+1,dp.begin()+i+1+nums[i]);
                cout<<x<<" ";
                dp[i]=x+1;
            }
            else if(nums[i]==0)
                    dp[i]=INT_MAX-1000;
        }
        return dp[0];
            
    }
};