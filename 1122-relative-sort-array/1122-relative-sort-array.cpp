class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        vector<int> v;
        for(auto x:arr1)
        {
            mp[x]++;
        }
        for(auto x:arr2)
        {
            for(int i=0;i<mp[x];i++)
            {
                v.push_back(x);
            }
            mp.erase(x);
        }
        for(auto x:mp)
        {
            for(int i=0;i<x.second;i++)
                v.push_back(x.first);
        }
        return v;
    }
};