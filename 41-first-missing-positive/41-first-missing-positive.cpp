class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int sm=1;
        map<int,int> mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        int flag=0;
        while(flag==0)
        {
            if(mp.find(sm)!=mp.end())
            {
                sm++;
            }
            else
            {
                flag=1;
                break;
            }
        }
    return sm;
            
    }
};