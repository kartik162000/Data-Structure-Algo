class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        cout<<s;
        sort(s.begin(),s.end());
        int t=0,b=0;
        t=(s[0]-'0')*10+s[2]-'0';
        b=(s[1]-'0')*10+s[3]-'0';
        int sum=t+b;
        return sum;
    }
};