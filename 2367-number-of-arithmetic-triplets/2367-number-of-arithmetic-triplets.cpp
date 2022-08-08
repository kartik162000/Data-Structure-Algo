class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int,int>mp;
        int count=0;
        for(auto x:nums)
        {
            if(mp.find(x-diff)!=mp.end() && mp.find(x-2*diff)!=mp.end())
                count++;
            mp[x]++;
        }
        return count;
    }
};