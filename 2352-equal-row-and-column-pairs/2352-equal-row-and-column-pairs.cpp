class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        map<vector<int>,int>mp;
        for(auto x:grid)
            mp[x]++;
        for(int i=0;i<grid[0].size();i++)
        {
            vector<int> col;
            for(int j=0;j<grid.size();j++)
            {
                  col.push_back(grid[j][i]);                
            }
            count+=mp[col];
        }
        return count;
    }
};