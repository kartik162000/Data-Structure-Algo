class Solution {
public:
    int maxScore(vector<int>& v, int k) {
    int t_sum=0,w_sum=0;
        for(int i=0;i<v.size();i++)
            t_sum+=v[i];
        
        if(v.size()==k)
            return t_sum;
        for(int i=0;i<v.size()-k;i++)
            w_sum+=v[i];
        int ans=t_sum-w_sum;
        for(int i=1;i<=k;i++)
        {
            w_sum=w_sum-v[i-1]+v[i+v.size()-k-1];
            ans=max(ans,t_sum-w_sum);
        }
        return ans;
        
    }
};