class Solution {
public:
    int uniquePaths(int m, int n) {
        int nums[m][n];
         if(m==1 &&n==1)
            return 1;
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i==m-1)
                {
                    if(j==n-1)
                        nums[i][j]=0;
                    else
                        nums[i][j]=1;
                }
                else
                {
                    if(j==n-1)
                        nums[i][j]=1;
                    else
                        nums[i][j]=nums[i+1][j]+nums[i][j+1];
                }
            }
        }
        return nums[0][0];
    }
};