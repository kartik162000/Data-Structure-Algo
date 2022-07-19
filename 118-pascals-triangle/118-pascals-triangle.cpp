class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        for(int i=0;i<numRows;i++)
        {
            vector<int> row(i+1);
            for(int j=0;j<=i;j++)
            {
                if(i==0 && j==0)
                {
                    row[j]=1;
                }
                else if(j==0 || j==i)
                {
                   row[j]=1;
                }
                else
                {
                    row[j]=vec[i-1][j-1]+vec[i-1][j];
                }
            }
            vec.push_back(row);
        }
        return vec;
    }
};