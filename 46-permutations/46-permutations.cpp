class Solution {
public:
    vector<vector<int>> vec;
    void help(vector<int>&nums,int index)
    {
        if(index==nums.size())
        {
            vec.push_back(nums);
            return;
        }
            for(int i=index;i<nums.size();i++)
            {
                swap(nums[i],nums[index]);
                help(nums,index+1);
                swap(nums[i],nums[index]);
            }
            
    }
    vector<vector<int>> permute(vector<int>& nums) {
    help(nums,0);
        return vec;
    }
};