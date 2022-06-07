class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss="",tt="";
        for(int i=0;i<s.size();i++)
        {
            if(ss.size()==0 && s[i]=='#')
                continue;
            else if(ss.size()==0|| s[i]!='#')
                ss+=s[i];
            else if(s[i]=='#')
                ss.pop_back();
        }
        
        for(int i=0;i<t.size();i++)
        {
               if(tt.size()==0 && t[i]=='#')
                continue;
           else if(tt.size()==0|| t[i]!='#')
                tt+=t[i];
            else if(t[i]=='#')
                tt.pop_back();
        }
        cout<<ss<<"\t"<<tt;
        if(ss==tt)
            return true;
        return false;
    }
};