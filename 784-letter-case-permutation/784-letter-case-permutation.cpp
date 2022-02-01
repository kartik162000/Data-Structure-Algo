class Solution {
public:
    void solve(string s,vector<string> &vec,int index)
    {
        if(index==s.size())
            return;
        
        for(int i=index;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                if(islower(s[i]))
                {
                    s[i]=toupper(s[i]);
                }
                else
                {
                    s[i]=tolower(s[i]);
                }
                vec.push_back(s);
                solve(s,vec,i+1);
            if(isalpha(s[i]))            //we have to do this for backtracking suppose a character gets converted to caps so                                                        //we need to again convert it to small case if it is alphabet
                if(isupper(s[i]))
                    s[i]=tolower(s[i]);
                else
                    s[i]=toupper(s[i]);
            }
            continue;
        }
        return;
    }
 
    vector<string> letterCasePermutation(string s) {
        vector<string> vec;
       vec.push_back(s);
        solve(s,vec,0);
   // sort(vec.begin(), vec.end());
   //  vec.erase(unique(vec.begin(), vec.end()), vec.end());
        return vec;
        
    }
};