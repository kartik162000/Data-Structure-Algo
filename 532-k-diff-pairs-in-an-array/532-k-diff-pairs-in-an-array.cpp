class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> mp;
        int count=0;
        for(auto x:nums)
        {
            mp[x]++;
        }
        if(k>0)
        {
            for(auto x:mp)
                {
                    if(mp.find(x.first+k)!=mp.end())
                    { 
                       count++;
                    }
                }
        }
        
        else if(k==0)
        {
            for(auto x:mp)
            {
                if(x.second>1)
                    count++;
            }    
        }
       
        return count;
    }
};