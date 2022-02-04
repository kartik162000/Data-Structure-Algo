class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> mp;
        vector<int>ans(0,nums.size());
        vector<int> v=nums;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]=nums.size()-1-i;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(mp[v[i]]);
        }
        return ans;
        
        
    }
};