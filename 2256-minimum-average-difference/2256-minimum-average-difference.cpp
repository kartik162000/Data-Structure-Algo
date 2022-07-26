class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int mins;
        int n=nums.size();
        long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        long l_sum=0;
        long l_avg;
        long r_avg;
        long compare=INT_MAX;
        long index=0;
        for(int i=0;i<nums.size();i++)
        {
            l_sum+=nums[i];
            l_avg=l_sum/(i+1);
            if(n-i-1==0)
                r_avg=0;
            else
                r_avg=(sum-l_sum)/(n-i-1);
            int x=abs(l_avg-r_avg);
            if(compare>x)
            {
                compare=x;
                index=i;
            }
        }
        return index;
    }
};