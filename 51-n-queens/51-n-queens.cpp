class Solution {
public:
    vector<vector<string>>ans;
    bool isValid(vector<string>&board,int row , int col){
        for(int i=row;i>=0;i--){
            if(board[i][col]=='Q')
                return false;
        }
        
        for(int i=row,j=col;i>=0&&j>=0;--i,--j){
            if(board[i][j]=='Q')
                return false;
        }
        
        for(int i=row,j=col;i>=0&&j<board.size();i--,j++){
            if(board[i][j]=='Q')
                return false;
        }
        
        return true;
    }
    void dfs(vector<string>&board , int row)
    {
        if(row==board.size()){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<board.size();i++){
            if(isValid(board,row,i)){
                board[row][i]='Q';
                dfs(board,row+1);
                board[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if(n<=0)
            return {{}};
        vector<string>board(n,string(n,'.'));
        dfs(board,0);
        return ans; 
    }
};











// class Solution {
// public:
//     vector<vector<string>> sols;
//     bool isSafe(vector<vector<string>> vec,int i,int j)
//     {
//         if(i==0)
//             return true;
//         for(int h=0;h<i,h++)
//         {
//             if(vec[i][h]=='Q')
//                 return false;
//         }
//         for(int l=0;l<j;l++)
//         {
//             if(vec[j][j]=='Q')
//                 return false;
//         }
//         int h=i;
//         int l=j;
//         while(h!=-1 || l!=-1)
//         {
//             if(vec[h][l]=='Q')
//                 return false;
//             h--;
//             l--;
//         }
//         return true;
//     }
//     void help(vector<vector<string>> vec,int row)
//     {
//         if(row==vec.size())
//         {
//             sols.push_back(vec)
//             return;
//         }
//         for(int i=0;i<vec.size();i++)
//         {
//             if(isSafe(vec,row,i))
//             {
//                 vec[row][i]='Q';
//                 help(vec,row+1);
//                 vec[row][i]='.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//     vector<vector<string>> vec( n , vector<int> (n, ".")); 
//         void help(vec,0);
//         return sols;
//     }
// };