class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         for(int i=0;i<matrix.size();i++)
         {
             for(int j=i+1;j<matrix[0].size();j++)
             {
                 swap(matrix[i][j],matrix[j][i]);
             }
         }
        int n=matrix[0].size();
        for(int j=0;j<matrix.size()/2;j++)
        {
            for(int i=0;i<matrix[0].size();i++)
            {
                swap(matrix[i][j],matrix[i][n-1-j]);       //00 - 0 2     1 0                               
            } 
    }
    }
};