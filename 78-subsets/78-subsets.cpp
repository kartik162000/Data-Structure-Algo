class Solution {
public:
    void solve(vector<int>&v,vector<vector<int>> &vec,int index,vector<int> &nums)
    {
        vec.push_back(v);
        for(int i=index;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            solve(v,vec,i+1,nums);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> v;
        solve(v,vec,0,nums);
        return vec;
    }
};