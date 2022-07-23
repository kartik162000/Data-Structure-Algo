class Solution {
public:
    vector<string> st;
    void help(map<char,string> &mp,string digits,int index,string s)
    {
        if(index==digits.size())
        {
            st.push_back(s);
            return;
        }
        string curr=mp[digits[index]];
        for(int i=0;i<curr.size();i++)
        {
            s.push_back(curr[i]);
            help(mp,digits,index+1,s);
            s.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return {};
        map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        help(mp,digits,0,"");
        return st;
    }
};