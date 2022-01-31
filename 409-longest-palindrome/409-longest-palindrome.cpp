class Solution {
public:
    int longestPalindrome(string s) {
        int res=0;
        map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        
        for(auto m:mp)
        {
            if(m.second>0)
                res+=(m.second-m.second%2);
        }
        if(s.size()==res)
            return res;
        else
           return res+1;
    }
};