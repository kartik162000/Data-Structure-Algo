class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> vec;
        map<int,int> mp;
        for(auto x:nums)
            mp[x]++;
        priority_queue<pair<int,int>> pq;    
        for(auto x:mp)
        {
            pq.push(make_pair(x.second,x.first));
        }
        for(int i=0;i<k;i++)
        {
            pair<int,int>p =pq.top();
            vec.push_back(p.second);
            pq.pop();
        }
    return vec;
    
    }
};