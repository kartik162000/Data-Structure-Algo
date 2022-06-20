class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]==0 && nums.size()>1)
            return false;
        if(nums[0]==0 && nums.size()==1)
            return true;
        if(nums.size()==1)
            return true;
        int dist=0;
        int m=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            dist=max(dist,nums[i]);
            if(dist==0 && i!=m) return false;
            dist--;
        }
        return true;
    }
};