class Solution {
public:
    int lengthOfLongestSubstring(string s) {  //a=0 b=1 c=2 l=1 r=2 len=3  //3
         
        
        map<char,int> mp;
        int l=0;
        int r=0;
        int len=0;
        
        while(r<s.size())
        {
            if(mp.find(s[r])==mp.end())
            {
                
                mp[s[r]]=r;
             
            }
            else
            {
               if(l<=mp[s[r]] && r>=mp[s[r]])
               {
                   l=mp[s[r]]+1;
                   mp[s[r]]=r;
               }
                else
                {
                    mp[s[r]]=r;
                }
                
            }
         len=max(len,r-l+1);
            r++;

        }
        return len;
        
        
    }
};