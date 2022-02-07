class Solution {
public:
    char findTheDifference(string s, string t) {
        char c;
        map<char,int>mp;
        map<char,int>mp1;
        for(auto x:s)
            mp[x]++;
        for(auto x:t)
        {
            mp1[x]++;
        }
       for(auto x:mp1)
       {
           if(x.second!=mp[x.first])
               return x.first;
       }
        return ' ';
    }
};