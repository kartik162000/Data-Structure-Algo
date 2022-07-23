class Solution {
public:
    vector<string> ans;
 void gen( int open, int close,string &s)
    {
        if (open == 0 and close == 0)
        {
            ans.push_back(s);
            return;
        }
        if (open > 0)
        {
            s.push_back('(');
            gen(open - 1, close,s);
            s.pop_back();
        }
        if (close > 0 and open < close)
        {
            s.push_back(')');
            gen(open, close - 1,s);
            s.pop_back();
        }
 }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        string s;
        gen(open,close,s);
        return ans;
    }
};