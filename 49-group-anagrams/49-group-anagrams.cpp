class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        map<string,vector<string>>m;
        for(auto x:strs)
        {
            string ori=x;
            sort(x.begin(),x.end());
            if(m.find(x)==m.end())
                m[x].push_back(ori);
            else
                m[x].push_back(ori);
        }
        int i=0;
        for(auto x:m)
        {
            vec.push_back(x.second);
        }
        return vec;
    }
};