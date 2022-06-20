class Solution {
public:
    int jump(vector<int>& nums) {
        
        int max_reach=0;
        int current=0;
        int jump=0;
       for(int i=0;i<nums.size()-1;i++)
       {
           max_reach=max(max_reach,nums[i]+i);
           if(i==current)
           {
               current=max_reach;
               jump++;
           }
       }
        return jump;
}
};