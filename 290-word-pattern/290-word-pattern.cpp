class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        vector<string> vec;
        istringstream ss(str);
         string word; 
    while (ss >> word) 
    {
       vec.push_back(word);
    }
        if(vec.size() != pattern.length())
        {
            return false;
        }
    
     map<char,string> mp;
        
    for(int i=0;i<pattern.size();i++)
        {
            if(mp.find(pattern[i])==mp.end())  
                mp[pattern[i]]=vec[i];
            else
            {
                if(mp[pattern[i]]!=vec[i])
                    return false;
            }
        }
         map<string,char> mp1;
        
    for(int i=0;i<pattern.size();i++)
        {
            if(mp1.find(vec[i])==mp1.end())  
                mp1[vec[i]]=pattern[i];
            else
            {
                if(mp1[vec[i]]!=pattern[i])
                    return false;
            }
        }
        return true;
    }
};