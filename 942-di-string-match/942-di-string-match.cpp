class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>v;
        int I=0;
        int D=s.size();
        int x;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
                x=I++;
            else
                x=D--;
            v.push_back(x);
        }
        v.push_back(D--);
        return v;
    }
};