class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')' && st.empty())
                s[i]='#';
            else if(s[i]=='(')
                st.push(i);
            else if(s[i]==')')
                st.pop();
        }
        while(!st.empty())
        {
            int x=st.top();
            s[x]='#';
            st.pop();
        }
        s.erase(remove(s.begin(), s.end(), '#'),s.end());
        return s;
    }
};