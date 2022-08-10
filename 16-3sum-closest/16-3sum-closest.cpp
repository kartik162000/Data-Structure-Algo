class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int a;
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=0;
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                sum=nums[i]+nums[l]+nums[r];
                if(sum<target)
                    l++;
                else if(sum>target)
                    r--;
                else
                    return target;
            }
            cout<<sum<<" "<<target-sum<<"\n";
          if(ans>abs(target-sum))   
          {
              a=sum;
              ans=(target-sum);
          }
        }
        return a;
    }
};