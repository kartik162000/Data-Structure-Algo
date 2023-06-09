class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int sm=1;
        map<int,int> mp;
        for(auto x: nums)
            mp[x]++;
        while(mp.find(sm)!=mp.end())
        {
            sm++;
        }
        return sm;
    }
};