class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0;
        int maxs=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                nums[i]+=1;
                sum++;
            }
            else if(nums[i]<nums[i-1])                   //1<0
            {
                sum=sum+maxs-nums[i]+1;
                nums[i]=maxs+1;
            }
            maxs=max(maxs,nums[i]);
        }
        return sum;
    }
};