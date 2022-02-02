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
     return vec;   
    }
};



/*  stl trick function next_permuation(nums.begin(),nums.end()) */