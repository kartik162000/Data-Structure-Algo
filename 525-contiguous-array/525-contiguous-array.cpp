class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int maxs=0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==0)
               sum-=1;
            else
                sum++;
            if(sum==0)
                maxs=max(maxs,i+1);
            else
            {
                if(mp.find(sum)==mp.end())
                {
                    mp[sum]=i;
                }
                else
                    maxs=max(maxs,i-mp[sum]);
            }
        }
        return maxs;
    }
};