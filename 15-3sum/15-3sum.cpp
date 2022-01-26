class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
                vector<vector<int>>vec;
        if(nums.size()<3)
            return  vec;
        int i=0;
        for(int i=0;i<=nums.size()-3;i++)
        {
            if(i>=1)
            {
                if(nums[i]==nums[i-1])
                    continue;
            }
            int j=i+1;
            int k=nums.size()-1;    
            while(j<k)
            {
                
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                    j++;
                else if(sum>0)
                        k--;
                else
                {
                    cout<<nums[i]<<","<<nums[j]<<","<<nums[k]<<'\n';
                    vec.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
        return vec;
    }
};