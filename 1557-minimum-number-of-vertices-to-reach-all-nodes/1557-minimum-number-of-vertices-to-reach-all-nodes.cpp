class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>mp(n,0);
        for(auto x:edges)
            mp[x[1]]++;
       vector<int> x; 
      
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]==0)
                x.push_back(i);
        }
        
        return x;
    }
};