class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
               int numberOfRows = matrix.size();
        int numberOfCols = matrix[0].size();
        bool row = false;
        bool col = false;
        for(int i = 0; i < numberOfCols; i++){
            if(matrix[0][i] == 0){
                row = true;
                break;
            }
        }

        for(int i = 0; i < numberOfRows; i++){
            if(matrix[i][0] == 0){
                col = true;
                break;
            }
        }
       
        for(int i = 1; i < numberOfRows; i++){
            for(int j = 1; j < numberOfCols; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        
        for(int i = 1; i < numberOfCols; i++){
            if(matrix[0][i] == 0){
                for(int j = 1; j < numberOfRows; j++){
                    matrix[j][i] = 0;
                }
            }
        }
        
        for(int i = 1; i < numberOfRows; i++){
            if(matrix[i][0] == 0){
                for(int j = 0; j < numberOfCols; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(row){
            for(int i = 0; i < numberOfCols; i++){
                matrix[0][i] = 0;
            }
        }
        if(col){
            for(int i = 0; i < numberOfRows; i++){
                matrix[i][0] = 0;
            }
        }
        }
};
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         bool row=false,col=false;
//         for(int i=0;i<matrix[0].size();i++)
//         {
//             if(matrix[0][i]==0)
//             {
//                 row=true;
//                 break;
//             }
//         }
//         for(int i=0;i<matrix.size();i++)
//         {
//             if(matrix[i][0]==0)
//             {
//                 col=true;
//                 break;
//             }
//         }
        
        
//         for(int i=1;i<matrix.size();i++)
//         {
//             for(int j=1;j<matrix[i].size();j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     matrix[0][i]=0;
//                     matrix[j][0]=0;
//                 }
//             }
//         }
//         for(int i=1;i<matrix[0].size();i++)
//         {
//             if(matrix[0][i]==0)
//             {
//                 for(int j=1;j<matrix.size();j++)
//                 {
//                     matrix[j][i]=0;
//                 }
//             }
//         }
        
//         for(int i=1;i<matrix.size();i++)
//         {
//             if(matrix[i][0]==0)
//             {
//                 for(int j=1;j<matrix[0].size();j++)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
            
//         if(row==true)
//         {
//             for(int i=0;i<matrix[0].size();i++)
//             {
//                 matrix[0][i]=0;
//             }
//         }
//         if(col==true)
//         {
//             for(int i=0;i<matrix.size();i++)
//             {
//                 matrix[i][0]=0;
//             }
//         }
  
        





 