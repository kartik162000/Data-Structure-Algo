class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         vector<int>x1,y1;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(matrix[i][j]==0){
                    x1.push_back(i);
                    y1.push_back(j);
                    
                }
            }
        }
        for(int i=0;i<x1.size();i++){
            for(int j=0;j<n;j++){

            matrix[x1[i]][j]=0;
            }
        }
        
         for(int i=0;i<y1.size();i++){
            for(int j=0;j<m;j++){
            matrix[j][y1[i]]=0;
            }
        }
      
    }
};