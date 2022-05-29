class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
            int n=nums.size();
        if(!binary_search(nums.begin(),nums.end(),target))
            return {-1,-1};
      auto low=lower_bound(nums.begin(),nums.end(),target);
        vector<int> v;
        v.push_back(low-nums.begin());
      auto high=upper_bound(nums.begin(),nums.end(),target);
        v.push_back(high-nums.begin()-1);
        return v;
    }
};