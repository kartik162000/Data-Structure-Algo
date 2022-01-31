class Solution {
public:
    string largestOddNumber(string num) {
        int last_odd=-1;
        for(int i=0;i<num.size();i++)
        {
            int x=num[i]-'0';
            if(x%2!=0)
                last_odd=i;
        }
        if(last_odd==-1)
            return "";
        else if(last_odd==num.size()-1)
            return num;
        else
            return num.substr(0,last_odd+1);
    }
};