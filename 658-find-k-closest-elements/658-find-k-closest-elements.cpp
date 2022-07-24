typedef pair<int, int> pi;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    priority_queue<pi, vector<pi>, greater<pi> > pq;
        for(auto y:arr)
        {
            int j=abs(x-y);
            pq.push(make_pair(j,y));
        }
    vector<int> v;
        while(k>0)
            {
                pair<int,int>pr=pq.top();
                v.push_back(pr.second);
                  pq.pop();
                k--;
            }
     sort(v.begin(),v.end());
        return v;
    }
};