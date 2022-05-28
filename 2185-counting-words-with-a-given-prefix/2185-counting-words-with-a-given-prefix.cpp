class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(auto x:words)
        {
            if(x.substr(0,pref.size())==pref)
                count++;
        }
        return count;
    }
};