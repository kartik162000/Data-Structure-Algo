class Solution {
public:
    bool isValid(string s) {
        bool flag=true;
        stack<char> st;
        for(auto c:s)
        {
            if(c=='('|| c=='['||c=='{')
                st.push(c);
            else if(c==')')
            {
                if(!st.empty() && st.top()=='(')
                {
                    st.pop();
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            else if(c==']')
            {
                 if(!st.empty() && st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    flag=false;
                    break;
                } 
            }
               
             else if(c=='}')
             {
                  if(!st.empty() && st.top()=='{')
                {
                    st.pop();
                }
                else
                {
                    flag=false;
                    break;
                }  
             }
                  
            }
            if(!st.empty())
            return false;
        return flag; 
    
    }
};