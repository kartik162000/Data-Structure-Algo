class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int flag=0;
        int last_pop;
        stack<int> st;
        for(auto x:arr)
        {
         if(x>0)
             st.push(x);
            else
            {
                flag=0;
                if(st.empty() ||st.top()<0)
                {
                    cout<<"gg";
                     st.push(x);
                    continue;
                }
                 
                while(!st.empty())
                {
                    if(st.top()<0 && x<0)
                    {
                        break;
                    }
                   if(st.top()>abs(x))
                   {
                       flag=1;
                        break;
                   }
                   
                    else if(st.top()==abs(x))
                    {
                        flag=1;
                        last_pop=st.top();
                        st.pop();
                        break;
                    }
                    else
                    {
                        last_pop=st.top();
                        st.pop();
                    }
                }     
                if(flag!=1)
                {
                    if(st.empty())
                        st.push(x);
                    else
                    {
                        if(st.top()<0)
                            st.push(x);
                    }
                        
                }
            }
  
        }
        vector<int>v;
        if(st.empty())
            return v;
        else
        {
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};