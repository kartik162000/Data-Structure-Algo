class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxs=INT_MIN,mins=INT_MAX;
        int arr_sum=0;
        int max_sum=0;
        int min_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            arr_sum+=nums[i];
            max_sum+=nums[i];
            min_sum+=nums[i];
            maxs=max(maxs,max_sum);
            if(max_sum<0)
                max_sum=0;
            mins=min(mins,min_sum);
            if(min_sum>0)
                min_sum=0;
        }
        if(arr_sum==mins)
            return maxs;
        return max(maxs,arr_sum-mins);
    }
};