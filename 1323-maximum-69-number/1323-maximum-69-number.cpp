class Solution {
public:
    int maximum69Number (int num) {
        vector<int> st;
        st.push_back(num);
        string s=to_string(num);
       string orig=s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6')
            {
                string temp=orig;
                temp[i]='9';
                int x=stoi(temp);
                st.push_back(x);
            }
        }
       return *max_element (st.begin(), st.end());
    }
};