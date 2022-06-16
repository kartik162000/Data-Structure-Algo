class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         map<int,int>mp;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
                mp[nums[i]]=i;
            else
            {
                if(abs(mp[nums[i]]-i)<=k)
                {
                     flag=1;
                    return true;
                }
                   
                else
                {
                     flag=0;
                    mp[nums[i]]=i;
                }
                   
            }
        }
        if(flag==1)
            return true;
        return false;
    }
};