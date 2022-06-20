class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mins=INT_MAX;
        int prof=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            mins=min(mins,v[i]);
            prof=max(prof,v[i]-mins);
        }
        return prof;
       
    }
};