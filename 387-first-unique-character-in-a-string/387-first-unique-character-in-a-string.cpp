class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        int index=-1;
        for(auto x:s)
            mp[x]++;
        for(int i=0;i<s.size();i++)
        {
          if(mp[s[i]]==1) {
                              index=i; 
              break;
          }
        }
        
        return index;
    }
};