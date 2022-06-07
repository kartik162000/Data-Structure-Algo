class Solution {
public:
    int minAddToMakeValid(string s) {
        int sum=0;
        stack<char> st;
        for(auto x:s)
        {
            if(st.empty())
                st.push(x);
            else
            {
                if(st.top()=='(' && x==')')
                    st.pop();
                else
                    st.push(x);
            }
        }
        return st.size();
    }
};