class Solution {
public:
     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j=0;
        int i=0;
        for(i;i<pushed.size();i++){
            st.push(pushed[i]);
            while(!st.empty() && j<popped.size() && popped[j]==st.top()){
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};