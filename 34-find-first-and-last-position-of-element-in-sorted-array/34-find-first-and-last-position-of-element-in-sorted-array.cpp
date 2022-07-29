class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int low=0;
    int high=nums.size()-1;
        vector<int> ans;
        int a=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<target)
                low=mid+1;
            else if(nums[mid]>target)
                high=mid-1;
           else
           {
            if(mid==0 || nums[mid-1]!=nums[mid])
            {
                a=mid;
                break;
            }   
            else
                high=mid-1;
           }
        }
     low=0;
     high=nums.size()-1;
        int b=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<target)
                low=mid+1;
            else if(nums[mid]>target)
                high=mid-1;
            else
            {
                if(mid==nums.size()-1|| nums[mid]!=nums[mid+1])
                {
                    b=mid;
                    break;
                }
                else
                    low=mid+1;
            }
            
        }   
        
        return {a,b};
    }
};