class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(auto x:ops)
        {
            if(x=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=a+b;
                st.push(b);
                st.push(a);
                st.push(c);
                cout<<"pushed:"<<c<<"\n";
            }
            else if(x=="D")
            {
                int d=st.top();
                d=d*2;
                st.push(d);
            }
            else if(x=="C")
                st.pop();
            else
            {
                int h=stoi(x);
                st.push(h);
            }
        }
        int sum=0;
        cout<<"\nstack is";
        while(!st.empty())
        {
            sum+=st.top();
            cout<<st.top()<<"\n";
            st.pop();
        }
        return sum;
    }
};