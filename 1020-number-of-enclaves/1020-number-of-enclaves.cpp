class Solution {
public:
    void help(vector<vector<int>> &grid,int i,int j)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]!=1)
                return;
        grid[i][j]=0;
        help(grid,i-1,j);
        help(grid,i+1,j);
        help(grid,i,j-1);
        help(grid,i,j+1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1 && (i==0||i==grid.size()-1 || j==0 || j==grid[0].size()-1))
                    help(grid,i,j);
            }
        }
   int count=0;
     for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                    count++;
            }
        }
        return count;
    }
    
};