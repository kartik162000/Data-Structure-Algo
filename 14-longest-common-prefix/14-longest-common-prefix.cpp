class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string min_string="";
        int l=INT_MAX;
        for(auto x:strs)
        {
            if(l>x.size())
                min_string=x;
        }
        l=min_string.size();
        string ans="";
        int count=0;
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(min_string[i]!=strs[j][i])
                    return min_string.substr(0,count); 
                
            }
            count++;
        }
        return min_string.substr(0,count);
    }
};