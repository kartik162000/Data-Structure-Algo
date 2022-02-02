class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum=0;
        int c=1;
        sort(cost.begin(),cost.end());
        for(int i=cost.size()-1;i>=0;i--)
        {
            if(c%3!=0)
                sum+=cost[i];
            c++;
        }
        return sum;
    }
};