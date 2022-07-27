class Solution {
public:
    int findPeakElement(vector<int>& nums) {
   if(nums.empty()||nums.size()==1) 
           return 0;
        if(nums[0]>nums[1]) 
            return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) 
            return nums.size()-1;
        int first=1;
        int last=nums.size()-2;
        int mid=0;
        while(first<=last)
        {
            mid=(first+last)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                break;
            else if(nums[mid]<nums[mid-1])
                last=mid-1;
            else
                first=mid+1;
        }
        return mid;
    }
};