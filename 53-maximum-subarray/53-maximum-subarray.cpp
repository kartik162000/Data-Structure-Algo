class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxs=INT_MIN;
        for(auto x:nums)
        {
            sum+=x;
            maxs=max(sum,maxs);
            if(sum<0)
                sum=0;
        }
        return maxs;
    }
};