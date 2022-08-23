class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        map<int,int> mp;
        mp[0]++;
        for(auto x:nums)
        {
            sum+=x;
          int rem=sum%k;
            if(rem<0)
                rem+=k;
            if(mp.find(rem)!=mp.end())
                count+=mp[rem];
            mp[rem]++;
        }
        return count;
    }
};