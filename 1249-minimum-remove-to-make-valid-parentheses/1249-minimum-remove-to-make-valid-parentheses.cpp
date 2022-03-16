class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
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
            s[st.top()] = '#';
            st.pop();
        }
        int i=0;
     while(i<s.size()) {
            if(s[i] != '#') {
                ans += s[i];
            }
            i++;
        }
        return ans;
    }
};