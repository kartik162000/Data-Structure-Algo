class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        map<int,int> mp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
      {
             sum=sum+nums[i];
            mp[sum]=i;
      }
        sum-=x;
        int longest=0;
        int val=0;
        mp[0]=0;
    for(int i=0;i<nums.size();i++)
    {
        val=val+nums[i];
        if(mp.find(val-sum)!=mp.end())
        {
            if(val-sum==0)
                longest=max(longest,i-mp[val-sum]+1);
            else
            longest=max(longest,i-mp[val-sum]);

        }            
    }
        if(longest==0)
        {
            if(sum==0)
            return nums.size();
            else
                return -1;
        }
        return nums.size()-longest;
        
        
    }
};