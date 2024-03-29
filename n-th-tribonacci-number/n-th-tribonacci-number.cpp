class Solution {
public:
    int tribonacci(int n) {

        int dp[n+1];     //t0 t1 t2 t3 t4
        //t3=t2+t1+t0  t4=t3+t2 
            dp[0]=0;
            if(n==0)
                return dp[0];
            dp[1]=1;
        if(n==1)
            return dp[1];
        dp[2]=1;
        if(n==2)
        return dp[2];
        for(int i=3;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        return dp[n];
    }
};