class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int running_sum=0;
        for(auto x:nums)
            running_sum+=x;
        int l_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(running_sum-nums[i]==l_sum)
                return i;
            l_sum+=nums[i];
             running_sum-=nums[i];

        }
        return -1;
    }
};