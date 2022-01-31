class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>>vec;
        vector<int>v;
        for(int i=0;i<=rowIndex;i++)
        {
            vector<int> row(i+1);
            for(int j=0;j<=i;j++)
            {
                if(j==0 &&i==0)
                {
                    row[j]=1;
                }
                else if(j==0 || j==i)
                    row[j]=1;
                else
                    row[j]=vec[i-1][j-1]+vec[i-1][j];
            }
            vec.push_back(row);
        }
        return vec[rowIndex];
        
    }
};