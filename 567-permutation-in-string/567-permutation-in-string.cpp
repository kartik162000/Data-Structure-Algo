class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp1;
        map<char,int> mp2;
        for(auto x:s1)
        {
            mp1[x]++;
        }
        int l=0;
        int r=0;
        int win_len=0;
        int lp=s2.size()-s1.size()+1;
        int ct_lp=1;
        while(r<=s2.size())
        {
            if(win_len==s1.size())
            {
                if(mp1==mp2)
                    return true;
                
                if(mp2[s2[l]]>1)
                {
                    mp2[s2[l]]-=1;
                }
                else
                    mp2.erase(s2[l]);
                l++;
                mp2[s2[r]]++;
                r++;
                ct_lp++;
            }
            else
            {
                mp2[s2[r]]++;
                r++;
                win_len++;
            }
        }
         
        return false;
    }
};