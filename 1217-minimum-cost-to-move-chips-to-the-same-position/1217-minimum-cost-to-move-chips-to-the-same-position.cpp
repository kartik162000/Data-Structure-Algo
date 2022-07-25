class Solution {
public:
    int minCostToMoveChips(vector<int>& nums) {
        // unordered_map<int,int>mp;
        int odd=0;
        int even=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0)
                odd++;
            else
                even++;
        }
        return min(odd,even);
    }
};