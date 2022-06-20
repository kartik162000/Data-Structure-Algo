class Solution {
public:
    int rob(vector<int>& nums) {
        
        vector<int> a(nums.size());
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        a[0]=nums[0];
        a[1]=max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++)
        {
            a[i]=max(a[i-1],nums[i]+a[i-2]);
        }
        int num1= a[n-2];
        vector<int> b(nums.size());
        b[1]=nums[1];
        b[2]=max(nums[1],nums[2]);
        for(int i=3;i<n;i++)
        {
            b[i]=max(b[i-1],nums[i]+b[i-2]);
        }
        int num2=b[n-1];
        return max(num1,num2);
        
    }
};