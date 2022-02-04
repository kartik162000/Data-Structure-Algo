class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k,0);
        int u;
        map<int,set<int>> mp;
        set<int>s;
        
        for(int i=0;i<logs.size();i++)
        {
            mp[logs[i][0]].insert(logs[i][1]);
        }
        
        for(auto x:mp)
        {
            set<int>s=x.second;
            u=s.size();
            ans[u-1]++;
        }
        return ans;
    }
};