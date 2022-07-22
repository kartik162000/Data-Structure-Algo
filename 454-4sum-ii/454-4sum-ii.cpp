class Solution {
public:
    int fourSumCount(vector<int>& num1, vector<int>& num2, vector<int>& num3, vector<int>& num4) {
        map<int,int> mp;
        for(auto x:num1)
        {
            for(auto y:num2)
            {
                mp[x+y]++;
            }
        }
        int count=0;
        for(auto x:num3)
        {
            for(auto y:num4)
            {
                if(mp.find(-(x+y))!=mp.end())
                {
                    count+=mp[-(x+y)];
                }
            }
        }
        return count;
    }
};