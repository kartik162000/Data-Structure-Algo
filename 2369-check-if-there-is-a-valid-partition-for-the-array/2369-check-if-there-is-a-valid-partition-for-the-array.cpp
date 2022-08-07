class Solution {
public:
    bool solve(vector<int> &nums,int i,vector<int> &dp)
    {
        if(i==nums.size())
            return true;
        if(dp[i]!=-1) return dp[i];
        if(i+1<nums.size() && nums[i]==nums[i+1])
        {
            if(solve(nums,i+2,dp)) return dp[i]=true;
            if(i+2<nums.size() && nums[i]==nums[i+2])
            {
                if(solve(nums,i+3,dp)) return dp[i]=true;
            }
        }
        if(i+2<nums.size() && nums[i+1]==nums[i]+1 && nums[i+2]==nums[i]+2)
        {
            if(solve(nums,i+3,dp)) return dp[i]=true;
        }
        return dp[i]=false;
    }
    bool validPartition(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
    
    
    
//     bool fnc(vector<int>&nums, int i, vector<int>& dp)
//     {    
//         if(i+1<nums.size() && nums[i+1]==nums[i])
//         {
//             if(fnc(nums,i+2, dp))return dp[i] = true;
            
//              //case 2 ) 3 equal elements
//             if(i+2< nums.size() && nums[i+2]==nums[i])
//             {
//                 if(fnc(nums,i+3, dp))return dp[i] = true;
//             }
//         }
        
//         //case 3) three elements in increasing order
        
//         if(i+2<nums.size() && nums[i+1]==nums[i]+1 && nums[i+2]==nums[i]+2)
//         {
//             if(fnc(nums,i+3, dp))return dp[i] = true;
//         }
        
//         return dp[i] = false;
       
//     }


    
    
    
    
    
    
    
    
};