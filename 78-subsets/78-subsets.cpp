class Solution {
public:
    void solve(vector<int>& nums,vector<int>&v,vector<vector<int>>&vec,int index)
    {
        vec.push_back(v);
        for(int i=index;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            solve(nums,v,vec,i+1);
            v.pop_back();
        }
        return;
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) { 
        vector<vector<int>> vec;
        vector<int> v;
        solve(nums,v,vec,0);
        return vec;
    }
};