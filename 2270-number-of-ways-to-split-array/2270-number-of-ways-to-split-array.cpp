class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0;
        long sum=0;
        for(auto x:nums)
            sum+=x;
        long l_sum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            l_sum+=nums[i];
            if(l_sum>=sum-l_sum)
                count++;
        }
        return count;
    }
};