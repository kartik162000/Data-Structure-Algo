class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
              int count=0;
        int sum=0;
        if(nums.size()<3) return 0;
  
        else
        {
            for(int i=2;i<nums.size();i++)
            {
                if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
                {
                    count++;
                    sum+=count;
                }
                else
                    count=0;
                    
            }
        }
        return sum;
    }
};