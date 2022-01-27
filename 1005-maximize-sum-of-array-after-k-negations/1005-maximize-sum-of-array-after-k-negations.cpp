class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
         priority_queue <int, vector<int>, greater<int> > pq;
        for(auto x:nums)
        {
            pq.push(x);
        }
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            x=x*(-1);
            pq.push(x);
        }
        int sum=0;
        while(!pq.empty())
        {
            sum+=(pq.top());
            pq.pop();
        }
        return sum;
    }
};