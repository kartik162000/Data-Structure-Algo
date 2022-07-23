class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_dist=0;
         if(nums[0]==0 && nums.size()>1)
            return false;
        if(nums[0]==0 && nums.size()==1)
            return true;
        if(nums.size()==1)
            return true;
        for(int i=0;i<nums.size();i++)
        {
            max_dist=max(max_dist,nums[i]);
               if(max_dist==0 && i!=nums.size()-1)
                    return false;
            max_dist--;
        }
        return true;
        
    }
};