class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxs_len=0;
        int sum=0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                sum--;
            else
                sum++;
            if(sum==0)
                maxs_len=max(maxs_len,i+1);
            else
            {
                if(mp.find(sum)==mp.end())
                        mp[sum]=i;
                else
                    maxs_len=max(maxs_len,i-mp[sum]);
            }
        }
        return maxs_len;
    }
};