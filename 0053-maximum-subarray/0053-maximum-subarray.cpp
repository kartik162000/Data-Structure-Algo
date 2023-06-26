class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs=INT_MIN;
        int sum=0;
        for(auto x:nums)
        {
                sum+=x;
                maxs=max(maxs,sum);
                if(sum<0)
                sum=0;
        }
        return maxs;
    }
};