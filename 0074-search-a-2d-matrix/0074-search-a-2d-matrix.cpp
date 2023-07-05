class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0;
        if(n*m==1 && matrix[0][0]==target)
            return true;
    for(int i=0;i<n;i++)
    {
        if(matrix[i][0]<=target)
            row=i;
    else 
        break;

    }
    cout<<row;
    
  if(binary_search(matrix[row].begin(),matrix[row].end(),target))
            return true;
        return false;
    }
};