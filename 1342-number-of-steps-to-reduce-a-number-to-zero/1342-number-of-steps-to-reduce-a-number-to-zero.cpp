class Solution {
public:
    int numberOfSteps(int num) {
        int ct=0;
        while(num)
        {
            if(num%2==0)
                num/=2;
            else
                num-=1;
            ct++;
        }
        return ct;
    }
};