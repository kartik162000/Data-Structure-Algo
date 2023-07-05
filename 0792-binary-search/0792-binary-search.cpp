class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first=0;
        int last=nums.size()-1;
        int mid=(first+last)/2;
        while(first<=last)
        {
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                last=mid-1;
            else
                first=mid+1;
            mid=(first+last)/2;
        }
        return -1;
    }
};