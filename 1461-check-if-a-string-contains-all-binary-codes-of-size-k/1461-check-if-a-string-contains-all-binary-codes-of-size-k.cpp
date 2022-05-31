class Solution {
public:
    bool hasAllCodes(string s, int k) {
                if(s.size()<k) return false;
        set<string> st;
        for(int i=0;i<=s.size()-k;i++)       
        {
            st.insert(s.substr(i, k));   //0-2  1-3
        }
        for(auto x:st)
            cout<<x<<" ";
        if(st.size()==pow(2,k))
            return true;
        return false;
    }
};