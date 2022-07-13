class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count=0;
        int r_index=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            {
                count++;
                r_index=i;
            }
        }
        if(count>1)
            return false;
       if(count==0)
           return true;
        
        if(r_index==nums.size()-1 ||r_index==1)
            return true;
      if (nums[r_index - 1] < nums[r_index + 1])
        return true;
    if(r_index-2>=0 && nums[r_index-2]<nums[r_index])
        return true;
    if(r_index<0)
        return true;
        return false;
    }
};