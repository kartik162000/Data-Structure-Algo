class Solution {
public:
    void traverse(vector<vector<int>> &grid,int i, int j,int & ct){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]!=1)
        {
            return ;
        }
        ct++;
        grid[i][j]=2;
        traverse(grid,i+1,j,ct);
        traverse(grid,i,j+1,ct);
        traverse(grid,i-1,j,ct);
        traverse(grid,i,j-1,ct);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int max_area=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
               if(grid[i][j]==1)
               {
                    int count=0;
                    traverse(grid,i,j,count);
                   max_area=max(max_area,count);
               }
                else
                    continue;
            }
        }
        return max_area;
    }
};