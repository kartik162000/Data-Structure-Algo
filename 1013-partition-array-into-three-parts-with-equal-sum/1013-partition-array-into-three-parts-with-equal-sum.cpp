class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
    int sum=0;
        for(auto x:arr)
        {
            sum+=x;
        }
        int test_sum=sum/3;
        if(sum%3!=0)
            return false;
        sum=0;
        int count=0;
        for(auto x:arr)
        {
            sum+=x;
            if(sum==test_sum)
            {
               count++;
                sum=0;
            }
        }
        return count>=3;
    }
};