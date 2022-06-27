class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2!=0)
            return false;
        sum=sum/2;
        int n=nums.size()+1;
       vector< vector< bool > > v( n, vector<bool>( sum+1, false ) );
        for(int i=0;i<v.size();i++)
        {
            v[i][0]=true;
        }
        for(int i=1;i<v.size();i++)
        {
            for(int j=1;j<v[i].size();j++)
            {
                if(nums[i-1]>j)
                    v[i][j]=v[i-1][j];
                else
                {
                    int x=j-nums[i-1];
                    v[i][j]=v[i-1][j] or v[i-1][x];
                }
            }
        }
       
        // for(auto x:v)
        // {
        //     for(auto y:x)
        //         cout<<y<<" ";
        //     cout<<"\n";
        // }
        
        return v[n-1][sum];
    }   
};