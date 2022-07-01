class Solution {
public:
    int countPairs(vector<int>& s) {
        map<int,int>mp;
         long long ans=1e9+7;
         long long count=0;
    for(auto x:s)
    {
        for(int i=0;i<=21;i++)
        {
            int t=1<<i;
            if(mp.find(t-x)!=mp.end())
            {
                count+=mp[t-x];
            }
        }
        mp[x]++;
    }
        return count%ans;
    }
};