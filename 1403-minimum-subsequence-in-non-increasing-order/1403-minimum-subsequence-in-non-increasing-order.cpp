class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        if(nums.size()==1) return nums;
        vector<int> v;
        int y=0;
       sort(nums.begin(),nums.end());
        int sum=0;
        for(auto x:nums) sum+=x;
        int i=nums.size()-1;
        while(sum>=y)                   
        {
            sum-=nums[i];
            y+=nums[i];
            v.push_back(nums[i]);
            i--;
        }
        return v;
    }
};