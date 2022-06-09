class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            int sum=nums[i]+nums[j];
            if(sum<target)
            {
                i++;
            }
            else if(sum>target)
            {
                j--;
            }
            else if(sum==target)
            {
                    v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
        }
        return nums;
    }   
};