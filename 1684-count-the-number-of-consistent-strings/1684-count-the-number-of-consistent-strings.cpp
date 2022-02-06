class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int flag=0;
        int count=0;
        map<char,int> al;
        map<char,int> mp;
        for(auto x:allowed)
            al[x]=1;
        for(auto x:words)
        {
            flag=0;
            for(auto y:x)
            {
                if(al.find(y)!=al.end())       
                    flag++;
            }
            if(flag==x.size())
            count++;
        }
         return count;
    }
};