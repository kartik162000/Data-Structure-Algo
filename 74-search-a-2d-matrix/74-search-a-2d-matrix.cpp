class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix[0].size();
        int n=matrix.size();
        if(m*n==1)
        {
             if(matrix[0][0]==target)
                return true;
            else
                   return false; 
        }
        int row=0;
        for(int i=0;i<matrix.size();i++)
        {
            if(target>=matrix[i][0])
                row=i;
            else
                break;
        }
        if(binary_search(matrix[row].begin(),matrix[row].end(),target))
            return true;
        return false;
    }
};