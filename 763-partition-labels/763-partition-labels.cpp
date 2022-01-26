class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=i;
        }
        vector<int> vec;
        
            int end=0;
            int start=0;
        for(int i=0;i<s.size();i++)
        {
            end=max(end,mp[s[i]]);
            cout<<end<<" ";
            if(i!=end)  
            {
                start++;
            }
            else
            {
                vec.push_back(start+1);
                end=0;
                start=0;
            }
        }
        return vec;
        
    }
};