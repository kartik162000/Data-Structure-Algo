class Solution {
public:
    void help(vector<vector<int>>&vec,vector<int> &nums,int index)
    {
        if(index==nums.size())
        {
             vec.push_back(nums);
              return;
        }
          
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            help(vec,nums,index+1);
            swap(nums[i],nums[index]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> vec;
    help(vec,nums,0);
       // sort(vec.begin(), vec.end());
// vec.erase(unique(vec.begin(), vec.end()), vec.end());
     return vec;   
    }
};