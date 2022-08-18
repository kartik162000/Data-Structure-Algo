class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(auto x:arr)
            mp[x]++;
        priority_queue<int> pq;
        int count=0;
        for(auto x:mp)
        {
            pq.push(x.second);
        }
        int n=arr.size();
        int y=arr.size();
        while(!pq.empty())
        {
            int x=pq.top();
        count++;
            y-=x;
            if(y<=n/2)
            {
                break;
            }
            pq.pop();
        }
    return count;
    }
};