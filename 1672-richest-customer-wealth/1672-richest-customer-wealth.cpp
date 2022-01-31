class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
    int maxs=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            int sum=0;
            for(int j=0;j<arr[i].size();j++)
            {
                sum+=arr[i][j];
            }
            maxs=max(maxs,sum);
        }
        return maxs;
    }
};