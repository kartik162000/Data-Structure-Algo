class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       
        int ans=INT_MAX;
        if(triangle.size()==1)
            return triangle[0][0];
        
        for(int i=1;i<triangle.size();i++)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                if(j==0)
                {
                    triangle[i][j]+=triangle[i-1][0];
                }
                else if(j==triangle[i].size()-1)
                {
                    triangle[i][j]+=triangle[i-1][j-1];
                }
                else
                {
                    triangle[i][j]+=min(triangle[i-1][j],triangle[i-1][j-1]);
                }
            if(i==triangle.size()-1)
                ans=min(ans,triangle[i][j]);
            }
        }
        return ans;
    }
};