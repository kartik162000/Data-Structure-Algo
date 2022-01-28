class Solution {
public:
    int rob(vector<int>& nums) 
    {
        vector<int> a(nums.size());
        int n=nums.size();
        if(n==0)
            return 0;
             a[0]=nums[0];
       if(n==1)
       {
           return a[0];
       }
        a[1]=max(nums[0],nums[1]);
        if(n==2)
            return a[1];
        
        for(int i=2;i<n;i++)
        {
            a[i]=max(a[i-1],nums[i]+a[i-2]);
        }
        return a[n-1];
    }
     
       
        
        
};