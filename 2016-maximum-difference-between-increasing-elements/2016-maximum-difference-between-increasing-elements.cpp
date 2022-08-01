class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max_diff=INT_MIN;
        int mins=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            max_diff=max(max_diff,nums[i]-mins);
            mins=min(mins,nums[i]);
        }
        if(max_diff<=0)
            return -1;
        return max_diff;
    }
};