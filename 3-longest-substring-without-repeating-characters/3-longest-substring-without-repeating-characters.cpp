class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    map<char,int> mp;
    int mins=0;
        int j=0;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]>1)
        {
            while(mp[s[i]]>1)
            {
                if(s[j]==s[i])
                    mp[s[j]]--;
                else
                    mp.erase(s[j]);
                j++;
            }
        }
        mins=max(mins,i-j+1);
    }
    return mins;
        
    }
};