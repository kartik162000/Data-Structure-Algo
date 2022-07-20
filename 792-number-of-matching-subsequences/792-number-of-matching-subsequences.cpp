class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<string,int> mp;
        int count=0;
        for(auto x:words)
            mp[x]++;
        for(auto x:mp)
        {
            string p=x.first;
            int st1=0,st2=0;
            while(st1<p.size() && st2<s.size())
            {
                if(p[st1]==s[st2])
                {
                    st1++;
                    st2++;
                }
                else
                    st2++;
            }
            if(st1==p.size())
                count+=x.second;
        }
        return count;
        
    }
};